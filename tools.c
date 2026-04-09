#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
// System Variables


float version = 1.02;
char command[] = "example";
int status = 1;
int *stat = &status;
// Functions

void enterCommand();

void calculator(){
    
    // Variable init
    char operand = 'm';
    float x = 0;
    float y = 0;
    char *op = &operand;
    float *a = &x;
    float *b = &y;
    
printf("Enter what you want to calculate. Format is: operand operator operand and add a space or enter in between.\n");
    
    scanf("%f%c%f", a,op,b);
        if (strcmp(op, "+") == 0){
            printf("%.3f + %.3f = %.2f\n", x, y, x + y);
            status = 1;
        } else if (strcmp(op, "+") == 7) {
            printf("Got lazy :P\n");
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
    // double testt = 3.4; DEBUG
    // The actual asking
    printf("Enter the marks total: ");
    scanf("%f", tM);
    printf("Enter total missed marks: ");
    scanf("%f", mM);
    scoredMarks = (((totalMarks - missedMarks)/totalMarks)* 100);
    printf("The student has scored %.0f out of %.0f and has scored %.2f percent.\n", totalMarks - missedMarks, totalMarks, scoredMarks);
    status = 1;

}


void allCommands(){
    printf("\nAll Commands:  \n\n --v / --version: View Teacher Tools version.\n --h / help: View all commands.\n --x / quit: Close the program.\n\nTools:\n\n --gg / grade :  Grade Generator - Outputs a letter depending on the students percentage grade. (NOT IMPLEMENTED YET!)\n --mk / mark : Marking Tests - Marks a test and outputs the marks earned and percentage grade.  \n --calc / calculator : Calculator - Calculates your equation.  \n");
    status = 1;
}

void enterCommand()
{
    char com[] = "example";
    char *input = com;
    status = 1;
    printf("Enter a command: ");
    scanf("%s",com);
    if (strcmp(input, "--mk") == 0 || strcmp(input, "mark") == 0) { // The command for markingTests()
        status = 2;
    } else if (strcmp(input, "--calc") == 0 || strcmp(input, "calculator") == 0){
        status = 3;
    }else if (strcmp(input, "--h") == 0 || strcmp(input, "help") == 0){ // The command for allCommands()
        status = 4;
    } 
      else if ((strcmp(input, "--v") == 0) || strcmp(input, "version") == 0) { // Prints the version. It is just too
                                                                              // simple to have its own status code.
        printf("The Teacher Tools version is %.2f.\n", version);
        status = 1;
    }  
    else if ( strcmp(input, "--x") == 0 || strcmp(input, "quit") == 0 ) { // The command to exit the program
        status = 0;
    }
    else {
        printf("Enter a valid command.\n");
        status = 1;
    }
}


int main(){
    printf("Welcome to Teacher Tools!\nEnter a command or use --help for a list of all commands.\n");
    while (true){
        if (status == 1){
            enterCommand();
        } else if (status == 2){
            markingTests();
        } else if (status == 3){
            calculator();
        }
            else if (status == 4){
            allCommands();
        } else if (status == 0){
            printf("The program will terminate shortly.\n");
            exit(0);
            break;
        }
        else {
            break;
        }
    }
}
