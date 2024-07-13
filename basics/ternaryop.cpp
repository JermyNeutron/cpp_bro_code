#include <iostream>

int main()
{

    // instead of using if... else...
    // if statement? true execute : false execute
    int grade;

    std::cout << "Enter a number: ";
    std::cin >> grade;

    grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

    // can also do
    // std::cout << (hungry ? true execute : false execute);

    return 0;
}