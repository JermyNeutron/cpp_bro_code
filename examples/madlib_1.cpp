// madlib exercise

#include <iostream>
#include <string>
#include <cstdlib> // needed to clear screen

int main()
{
    // Variable Declarations
    std::string name;
    int age;
    std::string hobby;
    std::string food;
    std::string city;
    std::string weather;
    std::string sport;

    // Questions
    std::cout << "What is the character's name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "How old is " << name << "?: ";
    std::cin >> age;

    std::cout << "Provde a hobby: ";
    std::getline(std::cin >> std::ws, hobby);

    std::cout << "Provide a meal: ";
    std::getline(std::cin >> std::ws, food);

    std::cout << "Provide a city: ";
    std::getline(std::cin >> std::ws, city);

    std::cout << "Provide a weather: ";
    std::getline(std::cin >> std::ws, weather);

    std::cout << "Provide a sport: ";
    std::getline(std::cin >> std::ws, sport);

    system("cls"); // clear screen
    
    // Output
    // name, age, hobby, food, city, weather, sport
    std::cout << "This is " << name << ".\n";
    std::cout << name << " is " << age << ".\n";
    std::cout << "Their favorite hobby is " << hobby << ". And when they aren't " << hobby << ",\n";
    std::cout << "they enjoy eating " << food << ". " << name << " is from " << city << ".\n";
    std::cout << "It's currently " << weather << " there, which makes it a perfect time to play \n";
    std::cout << sport << ".\n\n";

    return 0;
}