#ifndef BASICOPERATIONS_H
#define BASICOPERATIONS_H

// Include necessary cpp files and header files.
#include <string>

class BasicOperations {
    
    // Public functions, constructor and deconstructor prototypes for the BasicOperations class.
    public:
        BasicOperations();
        ~BasicOperations();
        double operationAdd();
        double operationSubtract();
        double operationMultiply();
        double operationDivide();
        double operationModulus();
    
    /*
        Private members of the BasicOperations class.
        This private member is to be used in do while loops
        inside of BasicOperations.cpp
    */
    private:
        std::string choice;
};

#endif
