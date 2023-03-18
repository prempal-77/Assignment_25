/*Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex number*/

#include <iostream>

class Complex {
public:
    // Constructor
    Complex(double real = 0, double imaginary = 0) : real_(real), imaginary_(imaginary) {}

    // Setter functions
    void SetReal(double real) { real_ = real; }
    void SetImaginary(double imaginary) { imaginary_ = imaginary; }
    void Set(double real, double imaginary) { real_ = real; imaginary_ = imaginary; }

    // Getter functions
    double Real() const { return real_; }
    double Imaginary() const { return imaginary_; }

    // Print function
    void Print() const { std::cout << real_ << " + " << imaginary_ << "i" << std::endl; }

private:
    double real_;
    double imaginary_;
};
