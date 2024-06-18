#include <iostream>
#include <vector>
// like a nickname

// typedef std::vector<std::pair<std::string, int>> parilist_t; // typedef names would end with _t
// typedef can be interchanged with 'using'

// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main(){
    text_t firstName = "Bro";
    number_t age = 21;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}