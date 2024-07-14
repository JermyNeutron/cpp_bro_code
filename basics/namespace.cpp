// namespace

// a namespace is a solution to prevent naming conflicts
// = identical names as long as namespace is different

#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    int x = 0;
    // prefix is scope resolution operator;
    using namespace first;

    std::cout << first::x;

    return 0;
}