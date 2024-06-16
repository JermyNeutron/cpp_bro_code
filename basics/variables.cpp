// variable types

#include <iostream>

int main()
{
    // whole numbers
    int x;  // declaration
    x = 24; // assignment
    int y = 35;

    // std::cout << x;

    int sum = x + y;
    // std::cout << sum; | 59

    // integer (whole numbers ONLY)
    int age = 21;
    int year = 2024;
    int days = 7.5; // truncates down to just '7'

    // double (numbers including decimals)
    double price = 10.99;
    double gpa = 2.5;
    double temperatue = 25.1;

    // std::cout << price; | 10.99

    // single character ONLY, use SINGLE QUOTES
    char grade = 'A';
    char initial = 'B';
    char initials = 'BC'; // truncates down to last character, here it's 'C'
    char currency = '$';

    // std::cout << currency; | $

    // boolean (true or false):
    bool student = false;
    bool power = true;
    bool forSale = false;

    // std::cout << forSale; | 0

    // string (objects that represents a sequence of text)
    std::string name = "Jeremy";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";

    std::cout << "Hello " << name << ',' << '\n';
    std::cout << "You are " << age << " years old." << '\n';

    return 0;
}