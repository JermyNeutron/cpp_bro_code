#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(0 < age && age < 18){
        std::cout << "You're too young!";
    }
    else if(age < 0){
        std::cout << "You haven't been born yet?!";
    }
    else{
        std::cout << "Welcome in!";
    }

    return 0;
}