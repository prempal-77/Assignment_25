/*Define a class Factorial and define an instance member function to find the Factorial of a
number using class.*/

#include <iostream>

class Factorial {
public:
    // Constructor
    Factorial() {}

    // Factorial function
    int Calculate(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * Calculate(n - 1);
        }
    }
};