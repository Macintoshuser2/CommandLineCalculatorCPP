// Including all necessary cpp files and header files.
#include <iostream>
#include <string>
#include <cmath>
#include "AdvancedOperations.h"

// Defining Pi.
#define PI 3.14159265

// Using the C++ standard library namespace.
using namespace std;

// Constructor
AdvancedOperations::AdvancedOperations() {
    // Nothing to do here.
}

// Destructor
AdvancedOperations::~AdvancedOperations() {
    // Nothing to do here.
}

// Function for finding the sine of an angle measure in degrees
void AdvancedOperations::operationSine() {
    double userInput = 0;
    double result = 0;
    
    do {
        // Prompt for the user to enter a value
        cout << "Enter a number in degrees:\t";
        cin >> userInput;
        
        /*
            Calculating the sine of the given angle measure.
            I needed to convert to radians, as the sin() function
            requires the parameter be in radians.
        */
        result = sin((userInput * (PI / 180)));
        
        // Display the answer and ask the user if they have another number to enter.
        cout << "\n\nThe sine of " << userInput << " degrees is " << result << "\n" << endl;
        cout << "\nDo you have another number to enter? (y/n):\t";
        cin >> choice;
        
    } while(choice != "n" && choice != "N");
}

// Function for finding the cosine of an angle measure in degrees
void AdvancedOperations::operationCosine() {
    double userInput = 0;
    double result = 0;
    
    do {
        //Prompt for the user to enter a value.
        cout << "Enter a number in degrees:\t";
        cin >> userInput;
        
        /*
            Calculating the cosine of the given angle measure.
            I needed to convert to radians, as the cos() function
            requires the parameter be in radians.
        */
        result = cos((userInput * (PI / 180)));
        
        // Display the answer and ask the user if they have another number to enter.
        cout << "\n\nThe cosine of " << userInput << " degrees is " << result << "\n" << endl;
        cout << "\nDo you have another number to enter? (y/n):\t";
        cin >> choice;
        
    } while(choice != "n" && choice != "N");
}

// Function for finding the tangent of an angle measure in degrees.
void AdvancedOperations::operationTangent() {
    double userInput = 0;
    double result = 0;
    
    do {
        // Prompt for the user to enter a value.
        cout << "Enter a number in degrees:\t";
        cin >> userInput;
        
        /*
            Calculating the tangent of the given angle measure.
            I needed to convert to radians, as the tan() function
            requires the parameter be in radians.
        */
        result = tan((userInput * (PI / 180)));
        
        // Display the answer and ask the user if they have another number to enter.
        cout << "\n\nThe tangent of " << userInput << " degrees is " << result << "\n" << endl;
        cout << "\nDo you have another number to enter? (y/n):\t";
        cin >> choice;
        
    } while(choice != "n" && choice != "N");
}

// Function for finding the cosecant of an angle measure in degrees.
void AdvancedOperations::operationCosecant() {
    double userInput = 0;
    double result = 0;
    
    do {
        // Prompt for the user to enter a value.
        cout << "Enter a number in degrees:\t";
        cin >> userInput;
        
        /*
            Calculating the cosecant of the given angle measure.
            I needed to convert to radians, as the sin() function
            requires the parameter be in radians.
        */
        result = (1 / sin((userInput * (PI / 180))));
        
        // Display the answer and ask the user if they have another number to enter.
        cout << "\n\nThe cosecant of " << userInput << " degrees is " << result << "\n" << endl;
        cout << "\nDo you have another number to enter? (y/n):\t";
        cin >> choice;
        
    } while(choice != "n" && choice != "N");
}

// Function for finding the secant of an angle measure in degrees.
void AdvancedOperations::operationSecant() {
    double userInput = 0;
    double result = 0;
    
    do {
        // Prompt for the user to enter a value.
        cout << "Enter a number in degrees:\t";
        cin >> userInput;
        
        /*
            Calculating the secant of the given angle measure.
            I needed to convert to radians, as the cos() function
            requires the parameter be in radians.
        */
        result = (1 / cos((userInput * (PI / 180))));
        
        // Display the answer and ask the user if they have another number to enter.
        cout << "\n\nThe secant of " << userInput << " degrees is " << result << "\n" << endl;
        cout << "\nDo you have another number to enter? (y/n):\t";
        cin >> choice;
        
    } while(choice != "n" && choice != "N");
}
// Function for finding the cotangent of an angle measure in degrees.
void AdvancedOperations::operationCotangent() {
    double userInput = 0;
    double result = 0;
    
    do {
        // Prompt for the user to enter a value.
        cout << "Enter a number in degrees:\t";
        cin >> userInput;
        
        /*
            Calculating the cotangent of the given angle measure.
            I needed to convert to radians, as the tan() function
            requires the parameter be in radians.
        */
        result = (1 / tan((userInput * (PI / 180))));
        
        // Display the answer and ask the user if they have another number to enter.
        cout << "\n\nThe cotangent of " << userInput << " degrees is " << result << "\n" << endl;
        cout << "\nDo you have another number to enter? (y/n):\t";
        cin >> choice;
        
    } while(choice != "n" && choice != "N");
}

// Function for finding the two possible values for the quadratic forumula for given a, b, and c variables.
void AdvancedOperations::operationQuadraticFormula() {
    double a = 0;
    double b = 0;
    double c = 0;
    
    double resultAdd = 0;
    double resultSubtract = 0;
    
    do {
        // Ask for the 3 necessary values to plug into the formula.
        cout << "Enter an 'a' value:\t";
        cin >> a;
        cout << "Enter a 'b' value:\t";
        cin >> b;
        cout << "Enter a 'c' value:\t";
        cin >> c;
        
        // Perform both addition and subtraction versions of the formulat to get the two answers we need.
        resultAdd = (-b + sqrt((pow(b, 2)) - (4 * (a * c)))) / (2 * a);
        resultSubtract = (-b - sqrt((pow(b, 2)) - (4 * (a * c)))) / (2 * a);
        
        // Display the approximate answers and ask the using if they have another entry to make.
        cout << "\n\nThe results are: " << resultAdd << " from addition, and " << resultSubtract << " from subtraction" << endl;
        cout << "\nDo you have another set of numbers to enter? (y/n):\t";
        cin >> choice;
    } while(choice != "n" && choice != "N");
}

// Function for finding the hypotenuse of a right triangle.
void AdvancedOperations::operationPythagoreanTheorem() {
    double a = 0;
    double b = 0;
    double result = 0;
    
    do {
        // Ask for the necessary leg lengths in units
        cout << "Enter an 'a' value:\t";
        cin >> a;
        cout << "Enter a 'b' value:\t";
        cin >> b;
        
        // Find the length of the hypotenuse
        result = sqrt(pow(a, 2) + pow(b, 2));
        
        // Display the answer and ask if the user has another entry to make.
        cout << "\n\nThe longest side of the triangle is approximatly " << result << " units." << endl;
        cout << "\nDo you have another set of numbers to enter? (y/n):\t";
        cin >> choice;
    } while(choice != "n" && choice != "N");
}

// A function for converting the given angle measure in degrees to radians.
void AdvancedOperations::operationFromDegreesToRadians() {
    double userInput = 0;
    double result = 0;
    
    do {
        // Prompt the user to enter a value.
        cout << "Please enter a number in degrees to convert to radians:\t";
        cin >> userInput;
        
        // Convert degree value to radians.
        result = (userInput * (PI / 180));
        
        // Display the answer and ask the user if they have another entry to make.
        cout << "\n" << userInput << " degrees is " << result << " radians.";
        cout << "\n\nDo you have another number to enter? (y/n):\t";
        cin >> choice;
    } while(choice != "n" && choice != "N");
}

// A function for converting he given angle measure in radians to degrees.
void AdvancedOperations::operationFromRadiansToDegrees() {
    double userInput = 0;
    double result = 0;
    
    do {
        // Prompt the user to enter a value.
        cout << "Please enter a number in radians to convert to degrees:\t";
        cin >> userInput;
        
        // Convert the radians value to degrees.
        result = (userInput * (180 / PI));
        
        // Display the answer and ask the user if they have another value to enter.
        cout << "\n" << userInput << " radians is " << result << " degrees.";
        cout << "\n\nDo you have another number to enter? (y/n):\t";
        cin >> choice;
    } while(choice != "n" && choice != "N");
}
