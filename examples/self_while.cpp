#include <iostream>

int main() {
    int myvar = 1;

    std::cout << "*****Basic Up-Count*****\n";

    while (myvar <= 10)
    {
        std::cout << myvar << "\n";
        myvar++;
    }
    
    std::cout << "Count finished!";

    return 0;
}