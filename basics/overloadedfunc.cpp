#include <iostream>

// functions can have the same name but have different parameters is called a function signature

void bakePizza() {
    std::cout << "Here is your pizza! That'll be $4.99.\n";
}

void bakePizza(std::string topping1) {
    std::cout << "Here is your " << topping1 << " pizza! That'll be $5.99.\n";
}

void bakePizza(int amount) {
    std::cout << "You want " << amount << " pizzas?!\n";
}

int main() {
    bakePizza();

    return 0;
}
