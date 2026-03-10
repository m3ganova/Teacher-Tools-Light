// Teacher Tools Light

/*header libraries */

#include <iostream>
#include <string>
#include <chrono>
#include <thread>

/* SYSTEM VARIBLES */
std::string version = "1.00";
bool isLatestVersion = false;
std::string versionMessage = "oi oi oi";
/* GLOBAL VARIABLES */
std::string command;
double percentage;

/* Functions */

void allCommands();
int enterCommand();


int wait(int t){
    std::this_thread::sleep_for(std::chrono::seconds(t));  // wait 't' seconds
    
    return t;
}
// Tool section where the Grade Generator service occurs (Chooses a grade from A - F based
// on the percentage score)
void declaringGrades(){
    std::cout << '\n' << "Enter the student's percentage." << "\n"
            << "NOTE: If you haven't gotten the percentage, use the 'marking tests' service." << '\n';
    std::cin >> percentage;
    if (percentage >= 90){
        std::cout << "The student has recieved an A."<< '\n' << '\n';
    } else if(percentage >= 80) {
        std::cout << "The student has recieved a B."<< '\n' << '\n';
    }
    else if(percentage >= 60) {
        std::cout << "The student has recieved a C."<< '\n' << '\n';
    }
    else if(percentage >= 50) {
        std::cout << "The student has recieved a D."<< '\n' << '\n';
    }
    else {
        std::cout << "The student has failed."<< '\n' << '\n';
    }

            enterCommand();
}
// Second Tool where it shows a result score for the marks
void markingTests(){
    // Variables
    double totalMarks;
    double missedMarks;
    double scoredMarks;

    // Main Thing
    std::cout << "Enter the marks total: ";
    std::cin >> totalMarks;
    std::cout << "Enter total missed marks: ";
    std::cin >> missedMarks;
    scoredMarks = ((totalMarks-missedMarks)/totalMarks);
    std::cout << "The student" << " has scored " << (totalMarks-missedMarks) << " out of "
              << totalMarks << " and has scored " << (scoredMarks * 100) << '%'  << '.' << '\n' 
              << '\n';
            enterCommand();
}
// See Commands [Add more commands] 
void allCommands(){
    std::cout << '\n' << "All Commands:" << '\n' << '\n'  << "tt--v / tt--version:" 
              << "View Teacher Tools version."
              << '\n' << "tt--h / tt--help: View all commands." << '\n' <<
              "tt--x / tt--exit: Close the program.";
    std::cout <<  '\n' << '\n' << "Tools: " << '\n' << '\n'  << "tool--gg :  Grade Generator -" <<
            " Outputs a letter depending on the student's percentage grade." << "\n" 
            << "tool--mk : Marking Tests - Marks a test and outputs" <<
            " the marks earned and percentage grade." << '\n' << '\n';
            enterCommand();
}

int enterCommand(){
    std::cout << "Enter a command: ";
    std::cin >> command;
    // Tools
    if (command == "tool--gg"){
        declaringGrades();
        }   else if (command == "tool--mk" || command == "b"){
            markingTests();
        }
        else if (command == "tt--h" || command == "tt--help"){
            std::cout << "Commands:" << '\n';
            allCommands();
            enterCommand();
        }
        // CLI Commands
        else if (command == "tt--v" || command == "tt--version"){
            // Getting version notification to update depending on version
            
            if (isLatestVersion = true){
                versionMessage = ". You are updated to the latest version.";
                // std::cout << isLatestVersion;
            } 
            
            if (isLatestVersion = false) {
                versionMessage = ". You are on an outdated version. It is recommended you update.";
            }
            // Displaying version
            std::cout << "The current Teacher Tools Light Program Version is " <<  version 
            << versionMessage << '\n';
            
            enterCommand();
        }
        else if (command == "tt--h" || command == "tt--help"){
            allCommands();
            enterCommand();
        }
            else if (command == "tt--x" || command == "tt--exit"){
            return 0;
            return 0;
        }
        else{
            std::cout << "\nEnter a valid command. Use tt--h / tt--help to view all commands." 
            << "\n";
             enterCommand();
        }
        return 0;
}



int main(){
    //Initializing variables 
    //START INTRO

    // Small Intro
    std::cout << "Welcome to Teacher Tools Light! " << "\n";

        //Moved it all to enterCommand()
        std::cout << "Enter a command or use tt--h" 
        <<" / tt--help for a list of all commands."
                  << '\n';
        enterCommand();

        //When the tool ends.
        std::cout << '\n' << "Program will close shortly." << '\n';

    return 0;
}