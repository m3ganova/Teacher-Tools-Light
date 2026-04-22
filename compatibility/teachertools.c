#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
// System Variables
#define ANSI_RED     "\x1b[31m"
#define ANSI_GREEN   "\x1b[32m"
#define ANSI_RESET   "\x1b[0m"
#define version 1.03

char command[] = "example";
int status = 1;
int *stat = &status;
// Functions
void gradeGen();
void enterCommand();
void calculator();


void calculator(){

char op;
char *s = &op;
double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf(" %c", s);
  // status = 1;

  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  // Processes the equation

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf\n", first, second, first + second);
      status = 1;
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf\n", first, second, first - second);
            status = 1;
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf\n", first, second, first * second);
            status = 1;
      break;
    case '/':
        if (first && second != 0.0) {
                printf("%.1lf / %.1lf = %.1lf\n", first, second, first / second);
                      status = 1;
            } else {
                printf(ANSI_RED "Error! Division by zero." ANSI_RESET);
                printf("\n");
            }
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! Operator is not an operator.\n");
  }

}

void markingTests(){
    float totalMarks;
    float missedMarks;
    float scoredMarks;
    // Pointers
    float *tM = &totalMarks;
    float *mM = &missedMarks;
    // float *sM = &scoredMarks;
    // The actual asking
    printf("\nEnter the marks total: ");
    scanf("%f", tM);
    printf("Enter total missed marks: ");
    scanf("%f", mM);
    scoredMarks = (((totalMarks - missedMarks)/totalMarks)* 100);
    printf("The student has scored %.0f out of %.0f and has scored %.2f percent.\n", totalMarks - missedMarks, totalMarks, scoredMarks);
    status = 1;

}


void gradeGen(){
    float percentage = 0.00;
    float *cen = &percentage;
    printf("\nEnter the student's percentage.\nNOTE: If you haven't gotten the percentage, use the 'marking tests' service: ");
    scanf("%f", cen);

    if (percentage >= 90){
        printf("The student has recieved an A.\n\n");
                status = 1;
    }
     else if(percentage >= 80) {
        printf("The student has recieved a B.\n\n");
            status = 1;
    }
    else if(percentage >= 60) {
        printf("The student has recieved a C.\n\n");
            status = 1;
    }
    else if(percentage >= 50) {
        printf("The student has recieved a D.\n\n");
            status = 1;
    }
    else if((percentage < 50) && (percentage > 0)){
        printf(ANSI_RED "The student has failed." ANSI_RESET);
	printf("\n\n");
                status = 1;
    }
    else if (percentage <= 0) {
            printf(ANSI_RED "Please enter a valid number. " ANSI_RESET);
            cen = 0;
        status = 3;
        }

    }

void allCommands(){
    printf("\nAll Commands:  \n\n --v / version: View Teacher Tools version.\n --h / help: View all commands.\n --q / quit: Close the program.\n\nTools:\n\n --gg / grade :  Grade Generator - Outputs a letter depending on the students percentage grade. \n --mk / mark : Marking Tests - Marks a test and outputs the marks earned and percentage grade.  \n --calc / calculator : Calculator - Calculates your equation.  \n\n");
    status = 1;
}

void enterCommand()
{
    char com[1024] = "example";
    char *input = com;
    status = 1;
    printf("Enter a command: ");
    scanf("%s",com);
        if ( strcmp(input, "--q") == 0 || strcmp(input, "quit") == 0 ) { // The command to exit the program
        status = 0;
    }
      else if ((strcmp(input, "--v") == 0) || strcmp(input, "version") == 0) { // Prints the version. It is just too simple to have its own status code.
        printf("The TeacherTools version is %.2f.\n", version);
        status = 1;
    } else if (strcmp(input, "--h") == 0 || strcmp(input, "help") == 0){ // The command for allCommands()
        status = 2; // Status 3, 4 and 5 will be reserved for any other system status codes
    } // Tools
        else if (strcmp(input, "--mk") == 0 || strcmp(input, "mark") == 0) { // The command for markingTests()
        status = 6;
    } else if (strcmp(input, "--gg") == 0 || strcmp(input, "grade") == 0){
        status = 7;
    } else if ((strcmp(input, "--calc") == 0 || strcmp(input, "calculator") == 0)){ // The command for allCommands()
        status = 8;
    }

    else {
        printf("Enter a valid command.\n");
        status = 1;
    }
}


int main(int argc, const char* argv[]){
    printf("Welcome to TeacherTools!\nEnter a command or use help for a list of all commands.\n");

    while (true){
        if (status == 1){
            enterCommand();
        } else if (status == 2){
            allCommands();
        } else if (status == 6){
            markingTests();
        }
          else if (status == 7){
            gradeGen();
        }
          else if (status == 8){
            calculator();
        }
         else if (status == 0){
            printf("The program will terminate shortly.\n");
            exit(0);
        }
        else {
            printf(ANSI_RED "An error has occured.\n" ANSI_RESET );
            return -1;
        }

        }
            return 0;
    }

// Function definitions

