#ifndef ADVANCEDOPERATIONS_H
#define ADVANCEDOPERATIONS_H

// Include necessary cpp files and header files
#include <string>

class AdvancedOperations {
    
    // Public functions, constructor and deconstructor prototypes for the AdvancedOperations class.
    public:
        AdvancedOperations();
        ~AdvancedOperations();
        void operationSine();
        void operationCosine();
        void operationTangent();
        void operationCosecant();
        void operationSecant();
        void operationCotangent();
        void operationQuadraticFormula();
        void operationPythagoreanTheorem();
        void operationFromDegreesToRadians();
        void operationFromRadiansToDegrees();
    
    /*
     Private members of the AdvancedOperations class.
     This private member is to be used in do while loops
     inside of AdvancedOperations.cpp
     */
    private:
        std::string choice;
};

#endif
