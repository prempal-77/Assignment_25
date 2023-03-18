/*Define a class Circle and define an instance member function to find the area of the
circle.*/

#include <iostream>
#include <cmath>
using namespace std;
class Circle {
public:
    // Constructor
    Circle() {}

    // Find area function
    double FindArea(double radius) {
        return M_PI * pow(radius, 2);
    }
};

int main() {
    // Create an instance of the Circle class
    Circle c;

    // Find the area of the circle
    double area = c.FindArea(5.0);

    // Print the result
    cout << "The area of the circle is: " << area << std::endl;

    return 0;
}
