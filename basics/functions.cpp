#include <iostream>

void happyBirthday(std::string name, int age) {
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear " << name << "!\n";
    std::cout << "Happy Birthday to you!\n\n";

    std::cout << "You are " << age << " years old!\n\n";
}

int main() {
    int age = 29;
    std::string name = "Jeremy";
    happyBirthday(name, age);
    happyBirthday(name, age);

    return 0;
}