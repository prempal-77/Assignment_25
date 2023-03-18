/*Define a class Rectangle and define an instance member function to find the area of the
rectangle.*/

#include <iostream>
using namespace std;

class Rectangle {
public:
    // Constructor
    Rectangle() {}

    // Find area function
    double FindArea(double length, double width) {
        return length * width;
    }
};

int main() {
    // Create an instance of the Rectangle class
    Rectangle r;

    // Find the area of the rectangle
    double area = r.FindArea(5.0, 3.0);

    // Print the result
    cout << "The area of the rectangle is: " << area << std::endl;

    return 0;
}
