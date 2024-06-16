#include <iostream>

/*
const keyword specifies that a variable's value is constant and immutable (read only)
*/

int main()
{

    const double PI = 3.14159; // UPPER CASE ANY CONST VARIABLE
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    return 0;
}