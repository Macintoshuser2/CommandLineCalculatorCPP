// Including all necessary cpp files and header files.
#include <iostream>
#include <string>
#include "BasicOperations.h"
#include "AdvancedOperations.h"

// Using the C++ standard library namespace.
using namespace std;

// Prototyping the function used for displaying the operation choices to the user.
void showPrompt();


// The main starting point of all C++ programs.
int main() {
    
    // Local variables used inside of switch cases and the do-while loop.
    string continueChoice = "y";
    int operationOption = 0;
    double answer = 0;
    
    // Objects to be used later on for calling the functions for executing operations.
    BasicOperations basicOperation;
    AdvancedOperations advancedOperation;
    
    // Welcome prompt.
    cout << "Hello user! Please choose an operation you would like to perform!\n" << endl;
    
    do {
        // Shows the user the options they can select for an operation.
        showPrompt();
        
        // Prompt the user to make a selection.
        cout << "Entry:\t";
        cin >> operationOption;
        
        // Making sure that the user can't input anything lower than 1 or higher than 15.
        if(operationOption < 1 || operationOption > 15) {
            cout << "Sorry, you can only select the values of 1 through 15.\n" << endl;
            continue;
        } else {
            
            // Test the selected operation and execute as necessary.
            switch(operationOption) {
                case 1:
                    answer = basicOperation.operationAdd();
                    cout << "Answer:\t" << answer << "\n" << endl;
                    break;
                case 2:
                    answer = basicOperation.operationSubtract();
                    cout << "Answer:\t" << answer << "\n" << endl;
                    break;
                case 3:
                    answer = basicOperation.operationMultiply();
                    cout << "Answer:\t" << answer << "\n" << endl;
                    break;
                case 4:
                    answer = basicOperation.operationDivide();
                    cout << "Answer:\t" << answer << "\n" << endl;
                    break;
                case 5:
                    answer = basicOperation.operationModulus();
                    cout << "Answer:\t" << answer << "\n" << endl;
                    break;
                case 6:
                    advancedOperation.operationSine();
                    break;
                case 7:
                    advancedOperation.operationCosine();
                    break;
                case 8:
                    advancedOperation.operationTangent();
                    break;
                case 9:
                    advancedOperation.operationCosecant();
                    cout << answer << "\n" << endl;
                    break;
                case 10:
                    advancedOperation.operationSecant();
                    break;
                case 11:
                    advancedOperation.operationCotangent();
                    break;
                case 12:
                    advancedOperation.operationQuadraticFormula();
                    break;
                case 13:
                    advancedOperation.operationPythagoreanTheorem();
                    break;
                case 14:
                    advancedOperation.operationFromDegreesToRadians();
                    break;
                case 15:
                    advancedOperation.operationFromRadiansToDegrees();
                    break;
            }
        }
        
        // Ask the user if they have another operation to execute.
        cout << "Do you want to execute another operation? (y/n):\t";
        cin >> continueChoice;
        cout << "\n\n\n" << endl;
    } while(continueChoice != "n" && continueChoice != "N");
}

// Function for displaying the operation options in a nice table format.
void showPrompt() {
    cout << " 1 for Addition\t\t\t\t 2 for Subtraction\t\t\t 3 for Multiplication" << endl;
    cout << " 4 for Division\t\t\t\t 5 for Modulus\t\t\t\t 6 for Sine" << endl;
    cout << " 7 for Cosine\t\t\t\t 8 for Tangent\t\t\t\t 9 for Cosecant" << endl;
    cout << "10 for Secant\t\t\t\t11 for Cotangent\t\t\t12 for the Quadratic Formula" << endl;
    cout << "13 for Pythagorean Theorem\t14 for Degrees to Radians\t\t15 for Radians to Degrees\n\n" << endl;
}
