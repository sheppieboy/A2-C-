#include <iostream>
#include "fraction.h"
using namespace std;


//find the greatest common divisior of 2 numbers
int Fraction::gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

//function to normalzie the 
void Fraction::normalize(){
    int greatest_common_divisor = gcd(numerator, denominator);
    numerator /= greatest_common_divisor;
    denominator /= greatest_common_divisor;
}

//constructors
Fraction::Fraction() : numerator(0), denominator(1) {
}

Fraction::Fraction(int num) : numerator(num), denominator(1) {
    normalize();
}

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {
    if (denominator == 0) {
        throw FractionException("Denominator cannot be zero.");
    }
    normalize();
}

//accessors
int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

//overwrite << operator
ostream& operator<<(ostream& os, const Fraction& fraction){
    os << fraction.getNumerator() << "/" << fraction.getDenominator();
    return os;
}


//unary operators

//- negation
Fraction Fraction::operator-() const {
    return Fraction(-numerator, denominator);
}

//++ pre-increment
Fraction Fraction::operator++() {
    numerator += denominator;
    return *this;
}

//++ (post increment)
Fraction& Fraction::operator++(int) {
    Fraction temp(*this);
    numerator += denominator;
    return temp;
}

