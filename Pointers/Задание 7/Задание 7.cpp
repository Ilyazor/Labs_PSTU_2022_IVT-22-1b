#include <iostream>

int a;

int main()
{
    std::cin >> a;

    int* pa = &a;

    *pa += 2;

    std::cout << a << std::endl;

    *pa -= 6;

    std::cout << a << std::endl;

    return 0;
}