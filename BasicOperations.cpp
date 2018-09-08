// Include necessary Headers and cpp files.
#include <iostream>
#include <string>
#include <cmath>
#include "BasicOperations.h"

// Using the C++ standard library namespace
using namespace std;

// Constuctor
BasicOperations::BasicOperations() {
    // Nothing to do here.
}

// Destructor
BasicOperations::~BasicOperations() {
    // Nothing to do here.
}

// Function for adding any amount of numbers that the user will enter.
double BasicOperations::operationAdd() {
    double result = 0;
    double userInput = 0;
    
    // Loops through until the user enters 'n' or 'N' when they don't have anymore numbers to enter.
    do {
        
        // Prompt for the user to enter a number and adding a tab after the colon.
        cout << "Please enter a number:\t";
        
        // Getting the input from the user.
        cin >> userInput;
        
        // Adding the user's input to the result we will return when the loop is done.
        result += userInput;
        
        // Asking if the user has another number to enter. (New line added for formatting reasons.)
        cout << "\nDo you have another number to enter? (y/n):\t";
        cin >> choice;
        cout << "\n" << endl;
    } while(choice != "n" && choice != "N");
    
    return result;
}

// Function for subtracting any amount of numbers that the user will enter.
double BasicOperations::operationSubtract() {
    double result = 0;
    double userInput = 0;
    
    // Loops through until the user enters 'n' or 'N' when they don't have anymore numbers to enter.
    do {
        
        // Prompt for the user to enter a number and adding a tab after the colon.
        cout << "Please enter a number:\t";
        
        // Getting the input from the user.
        cin >> userInput;
        
        // Subtracting the user's input to the result we will return when the loop is done.
        if(result == 0) {
            
            // To prevent the user input from going unecessarily negative the first time through the loop.
            userInput -= result;
            result = userInput;
        } else {
            result -= userInput;
        }
        
        // Asking if the user has another number to enter. (New line added for formatting reasons.)
        cout << "\nDo you have another number to enter? (y/n):\t";
        cin >> choice;
        cout << "\n" << endl;
    } while(choice != "n" && choice != "N");
    
    return result;
}

// Function for multiplying any amount of numbers that the user will enter.
double BasicOperations::operationMultiply() {
    double result = 0;
    double userInput = 0;
    
    // Loops through until the user enters 'n' or 'N' when they don't have anymore numbers to enter.
    do {
        
        // Prompt for the user to enter a number and adding a tab after the colon.
        cout << "Please enter a number:\t";
        
        // Getting the input from the user.
        cin >> userInput;
        
        // Multiplying the user's input to the result we will return when the loop is done.
        if(result == 0) {
            
            // To prevent the user input from being 0 the first time through the loop.
            result = userInput;
        } else {
            result *= userInput;
        }
        
        // Asking if the user has another number to enter. (New line added for formatting reasons.)
        cout << "\nDo you have another number to enter? (y/n):\t";
        
        cin >> choice;
        cout << "\n" << endl;
    } while(choice != "n" && choice != "N");
    
    return result;
}

// Function for dividing any amount of numbers that the user will enter.
double BasicOperations::operationDivide() {
    double result = 0;
    double userInput = 0;
    
    // Loops through until the user enters 'n' or 'N' when they don't have anymore numbers to enter.
    do {
        
        // Prompt for the user to enter a number and adding a tab after the colon.
        cout << "Please enter a number:\t";
        
        // Getting the input from the user.
        cin >> userInput;
        
        // Making sure the input can't be zero, as you can't divide by zero.
        if(userInput == 0) {
            cout << "Sorry, you can't divide by " << userInput << ". Please try again!" << endl;
            cout << "\nPlease enter a number:\t";
            cin >> userInput;
        } else {
            // Dividing the user's input to the result we will return when the loop is done.
            if(result == 0) {
                
                // To prevent the user input from being 0 the first time through the loop.
                result = userInput;
            } else {
                result /= userInput;
            }
        }

        // Asking if the user has another number to enter. (New line added for formatting reasons.)
        cout << "\nDo you have another number to enter? (y/n):\t";
        
        cin >> choice;
        cout << "\n" << endl;
    } while(choice != "n" && choice != "N");
    
    return result;
}

// Function for performing the modulus operation on any amount of numbers that the user will enter.
double BasicOperations::operationModulus() {
    double result = 0;
    double userInput = 0;
    
    // Loops through until the user enters 'n' or 'N' when they don't have anymore numbers to enter.
    do {
        
        // Prompt for the user to enter a number and adding a tab after the colon.
        cout << "Please enter a number:\t";
        
        // Getting the input from the user.
        cin >> userInput;
        
        // Making sure the input can't be zero, as you can't divide by zero.
        if(userInput == 0) {
            cout << "Sorry, you can't divide by " << userInput << ". Please try again!" << endl;
            cout << "\nPlease enter a number:\t";
            cin >> userInput;
        } else {
            // Dividing the user's input to the result we will return when the loop is done.
            if(result == 0) {
                
                // To prevent the user input from being 0 the first time through the loop.
                result = userInput;
            } else {
                // Temporary variable for storing the result of fmod to transfer over to result.
                double temp = fmod(result, userInput);
                result = temp;
            }
        }
        
        // Asking if the user has another number to enter. (New line added for formatting reasons.)
        cout << "\nDo you have another number to enter? (y/n):\t";
        
        cin >> choice;
        cout << "\n" << endl;
    } while(choice != "n" && choice != "N");
    
    return result;
}
