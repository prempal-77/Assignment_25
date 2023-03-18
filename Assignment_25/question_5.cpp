/*Define a class ReverseNumber and define an instance member function to find Reverse
of a Number using class.*/

#include <iostream>

class ReverseNumber {
public:
    // Constructor
    ReverseNumber() {}

    // Reverse number function
    int Reverse(int n) {
        int reversed = 0;
        while (n > 0) {
            reversed = reversed * 10 + (n % 10);
            n /= 10;
        }
        return reversed;
    }
};

int main() {
    // Create an instance of the ReverseNumber class
    ReverseNumber r;

    // Reverse a number
    int result = r.Reverse(12345);

    // Print the result
    std::cout << "The reverse of the number is: " << result << std::endl;

    return 0;
}
