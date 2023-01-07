#include <iostream>

int main(void)
{
    int a;
    int b;
    int c;

    std::cout << "Enter a number\n";
    std::cin >> a;

    std::cout << "Enter another number\n";
    std::cin >> b;

    c = a + b;
    std::cout << "The sum of the two numbers is: " << c << "\n";
    return 0;
}