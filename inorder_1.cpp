#include <iostream>

int main() {
    std::cout << "Enter three integers: ";
    int a, b, c;
    std::cin >> a >> b >> c;

    if ((a <= b && b <= c) || (c <= b && b <= a)) {
        std::cout << "In order" << std::endl;
    } else {
        std::cout << "Not in order" << std::endl;
    }

    return 0;
}
