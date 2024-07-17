#include <iostream>


double square(double length);

double cube(double length);

std::string concatStrings(std::string string1, std::string string2);

int main() {
    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::string firstName = "Jeremy";
    std::string lastName = "Crisostomo";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Area is " << area << "cm^2\n";
    std::cout << "Volume is " << volume << "cm^3\n";

    std::cout << "You're name is " << fullName << ". Welcome!\n";

    return 0;
}

double square(double length) {
    double result = length * length;
    return result;
}

double cube(double length) {
    return pow(length, 3);
}

std::string concatStrings(std::string string1, std::string string2) {
    return string1 + " " + string2;
}