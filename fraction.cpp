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
    
void Fraction::normalize(){
    int greatest_common_divisor = gcd(numerator, denominator);
    numerator /= greatest_common_divisor;
    denominator /= greatest_common_divisor;
}

//constructors
Fraction::Fraction();


//overwrite << operator
ostream& operator<<(ostream& os, const Fraction& fraction){
    os << fraction.numerator() << "/" << fraction.denominator();
    return os;
}

