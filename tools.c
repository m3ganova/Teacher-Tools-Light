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
    enterCommand();

}


void allCommands(){
    printf("\nAll Commands:  \n\n tt--v / --version: View Teacher Tools version.\n tt--h / --help: View all commands.\n tt--x / --exit: Close the program.\n\nTools:\n\n --gg / grade :  Grade Generator - Outputs a letter depending on the students percentage grade. (NOT IMPLEMENTED YET!)\n --mk / mark : Marking Tests - Marks a test and outputs the marks earned and percentage grade.  \n --calc / calculator : Calculator - Calculates your equation.  \n");
    enterCommand();
}

void enterCommand()
{
    char com[] = "example";
    char *input = com;
    status = 1;
    printf("Enter a command: ");
    scanf("%s",com);
    if (strcmp(input, "--mk") == 0 || strcmp(input, "mark") == 0) {
        status = 2;
    } else if (strcmp(input, "--help") == 0 || strcmp(input, "help") == 0){
        status = 3;
    } else {
        printf("Print a valid command.\n");
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
            allCommands();
        } else if (status == 0){
            break;
        }
        else {
            break;
        }
    }
}
