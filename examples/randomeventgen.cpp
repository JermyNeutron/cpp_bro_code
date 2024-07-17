#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL)); // creates seed for random variables

    int randNum = rand() % 5 + 1;

    switch (randNum) {
    case 1:
        std::cout << "You win a bumper sticker!\n";
        break;
    case 2:
        std::cout << "You win a t-shirt!\n";
        break;
    case 3:
        std::cout << "You win a free lunch!\n";
        break;
    case 4:
        std::cout << "You win a gift card!\n";
        break;
    case 5:
        std::cout << "You win a concert ticket!\n";
        break;
    
    default:
        break;
    }
    return 0;
}