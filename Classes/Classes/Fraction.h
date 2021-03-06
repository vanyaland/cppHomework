#ifndef __Classes__Fraction__
#define __Classes__Fraction__

#include <stdio.h>

class Fraction {
    int numerator;
    int denominator;

#pragma mark - Constructors -
    
public:
    
    Fraction() {
        this->numerator   = 0;
        this->denominator = 0;
    }

    Fraction(const int& _numerator, const int& _denominator) : numerator(_numerator), denominator(_denominator) {}
    
#pragma mark - Public Methdos define -
    
    void printFraction() const;
    
    void changeToIrreducible();

#pragma mark - Private Methods define -
    
private:
    
    int NOD() const;
};

#endif /* defined(__Classes__Fraction__) */
