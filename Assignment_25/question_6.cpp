/*Define a class Square to find the square of a number and write a C++ program to Count
number of times a function is called.*/

#include <iostream>
using namespace std;

class Square {
private:
    int count;

public:
    // Constructor
    Square() {
        count = 0;
    }

    // Square function
    int FindSquare(int n) {
        count++; // Increment the counter
        return n * n;
    }

    // Get count function
    int GetCount() {
        return count;
    }
};

int main() {
    // Create an instance of the Square class
    Square s;

    // Find the square of a number
    int result = s.FindSquare(5);

    // Print the result
    cout << "The square of the number is: " << result << std::endl;

    // Find the square of another number
    result = s.FindSquare(8);

    // Print the result
    cout << "The square of the number is: " << result << std::endl;

    // Get the number of times the function was called
    int count = s.GetCount();

    // Print the count
    cout << "The function was called " << count << " times." << std::endl;

    return 0;
}
