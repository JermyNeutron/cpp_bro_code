#include <iostream>
#include <cmath>

int main()
{
    double x = 3.14;
    double y = 4;
    double z;

    // z = std::max(x, y); // 4
    // z = std::min(x, y); // 3

    // z = pow(2, 4);
    // z = sqrt(16);
    // z = abs(-342);
    // z = round(x);
    // z = ceil(x);
    z = floor(x);

    std::cout << z;

    return 0;
}