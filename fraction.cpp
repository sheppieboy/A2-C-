#include <iostream>
using namespace std;

class Fraction {
private:
    //numerator and denominator
    int numerator;
    int denominator;

    //find the greatest common divisior of 2 numbers
    int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
    
    void normalize(){

        int greatest_common_divisor = gcd(numerator, denominator);

        numerator /= greatest_common_divisor;
        denominator /= greatest_common_divisor;
    }

public:
    //constructors
    Fraction() : numerator(0), denominator(1) {}

    Fraction(int num) : numerator(num){}

    Fraction(int num, int denom) : numerator(num), denominator(denom){}


    //overwrite << operator
    friend ostream& operator<<(ostream& os, const Fraction& fraction){
        os << fraction.numerator << "/" << fraction.denominator;
        return os;
    }
};


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