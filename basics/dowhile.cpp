#include <iostream>
#include <string>

int main() {
    // do while loop
    int number;

    // while(number < 0){
    //     std::cout << "Enter a positive number: ";
    //     std::cin >> number;
    // }

    do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The number is " << number;

    return 0;
}