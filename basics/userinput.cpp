#include <iostream>
#include <string>

/*
cout << (insertion operator)
cin >> (extraction operator)
*/

int main(){
    std::string name;
    int age;

    std::cout << "What is your name?: ";
    // std::cin >> name; // accepts one word answers, no space
    std::getline(std::cin >> std::ws, name);

    std::cout << "What is your age?: ";
    std::cin >> age;

    std::string hobby;
    
    std::cout << "What is your hobby?: ";
    std::getline(std::cin >> std::ws, hobby);

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old.\n";
    std::cout << "You enjoy " << hobby << " which is pretty cool!\n";
    // when using ::getline(), if there's any input prior to to it, it'll accept an 'invisible' \n from the previous input. so we add the `>> std::ws` for account for white space

    return 0;
}