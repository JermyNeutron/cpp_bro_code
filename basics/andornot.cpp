// &&, ||, !
#include <iostream>

int main()
{
    int temp;
    bool sunny = false;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if (temp <= 0 || temp >= 30){
        std::cout << "The weater sucks today.\n";
    } else {
        std::cout << "The temperature is good!\n";
    }

    if (sunny) {
        std::cout << "It is sunny outside too.";
    } else {
        std::cout << "Where tf did the sun go?";
    }

    return 0;
}