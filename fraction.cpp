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

int main() {

	// Test constructors and << operator overloading
	Fraction test1;
	cout << "Should be \"0/1\": " << test1 << endl;
	Fraction test2(4);
	cout << "Should be \"4/1\": " << test2 << endl;
	Fraction test3(20, 30);
	cout << "Should be \"2/3\": " << test3 << endl;
	Fraction test4(210, -60);
	cout << "Should be \"-7/2\": " << test4 << endl;

    return 0;
}