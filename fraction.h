class Fraction {
private:

    //numerator and denominator
    int numerator;
    int denominator;

    //greatest common divisor function
    int gcd(int a, int b);

    //normalize the function to be the most simplified fraction, i.e. 15/9 -> 5/3
    void normalize();

public:

    //unary binary:

    //- (negation)
    Fraction operator-() const;

    // ++ (pre-increment)
    Fraction operator++(); 

    //++ (post increment)
    Fraction& operator++(int);


    //binary operators

    //+ (addition)
    Fraction operator+(const Fraction& other) const;

    //- (subtraction)
    Fraction operator-(const Fraction& other) const;

    // * (multiplication)
    Fraction operator*(const Fraction& other)

    // / (division)


    //+= (addition and assignment)



    //The comparison operators: < <= == != >= >





};