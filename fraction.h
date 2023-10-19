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

    //constructors

    //accessors
    int getNumerator() const;
    int getDenominator() const;


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
    Fraction operator*(const Fraction& other) const;

    // / (division)
    Fraction operator/(const Fraction& other) const;


    //+= (addition and assignment)
    Fraction operator+=(const Fraction& other);


    //The comparison operators: < <= == != >= >

    //<
    bool operator<(const Fraction& other) const;

    //<=
    bool operator<=(const Fraction& other) const;

    //==
    bool operator==(const Fraction& other) const;

    // !=
    bool operator!=(const Fraction& other) const;

    //>=
    bool operator>=(const Fraction& other) const;

    //>
    bool operator>(const Fraction& other) const;

    
    //overloading of input and output, must use the friend keyword
    friend std::ostream& operator<<(std::ostream output, const Fraction& fraction);
    
    friend std::istream& operator<<(std::istream input, Fraction& fraction);

    

};