/*Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc.*/

#include <iostream>
#include <cmath>
using namespace std;

class Area {
public:
    // Constructor
    Area() {}

    // Find area of a square function
    double FindSquareArea(double side) {
        return pow(side, 2);
    }

    // Find area of a rectangle function
    double FindRectangleArea(double length, double width) {
        return length * width;
    }

    // Find area of a circle function
    double FindCircleArea(double radius) {
        return M_PI * pow(radius, 2);
    }
};

int main() {
    // Create an instance of the Area class
    Area a;

    // Find the area of the square
    double squareArea = a.FindSquareArea(5.0);

    // Find the area of the rectangle
    double rectangleArea = a.FindRectangleArea(5.0, 3.0);

    // Find the area of the circle
    double circleArea = a.FindCircleArea(5.0);

    // Print the results
    cout << "The area of the square is: " << squareArea << endl;
    cout << "The area of the rectangle is: " << rectangleArea <<endl;
    cout << "The area of the circle is: " << circleArea <<endl;

    return 0;
}
