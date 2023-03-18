/*Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.*/

#include <iostream>

class LargestNumber {
public:
    // Constructor
    LargestNumber() {}

    // Find largest function
    int FindLargest(int a, int b, int c) {
        int largest = a;
        if (b > largest) {
            largest = b;
        }
        if (c > largest) {
            largest = c;
        }
        return largest;
    }
};

int main() {
    // Create an instance of the LargestNumber class
    LargestNumber l;

    // Find the largest of three numbers
    int result = l.FindLargest(5, 10, 3);

    // Print the result
    std::cout << "The largest of the three numbers is: " << result << std::endl;

    return 0;
}
