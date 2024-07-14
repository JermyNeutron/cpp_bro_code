#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL)); // initialize number
    int num1 = (rand() % 20) + 1; // using modulus gives us remainder, we add 1 to go from indices 0-5 to 1-6
    int num2 = (rand() % 20) + 1; // using modulus gives us remainder, we add 1 to go from indices 0-5 to 1-6
    int num3 = (rand() % 20) + 1; // using modulus gives us remainder, we add 1 to go from indices 0-5 to 1-6

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';
}