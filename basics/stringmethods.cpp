#include <iostream>
#include <string>

int main(){
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // // length
    // if(name.length() > 12){
    //     std::cout << "Your name can't be over 12 characters!";
    // } else {
    //     std::cout << "Welcome " << name << "!";
    // }

    // // empty, returns bool
    // if(name.empty()){
    //     std::cout << "You didn't enter a name!";
    // } else {
    //     std::cout << "Welcome " << name << "!";
    // }

    // return 0;

    // .clear()

    // .append()

    // .at() is indexing string
    // std::cout << name.at(0);

    // // .insert(arg1, arg2)
    // name.insert(0, "@");
    // std::cout << "Visit me at " << name;

    // .find("string"), finds first occurence of argument

    // erase(beginning index, ending index)
    name.erase(0, 4);
    std::cout << name;

    return 0;
}