#include <iostream>

int main()
{

    int n, tmp, * ptr = &tmp, max, min;
    std::cout << "Enter sequence length: ";
    std::cin >> n;
    std::cout << "Enter the first number: ";
    std::cin >> *ptr;
    max = *ptr;
    min = *ptr;
    for (int i = 2; i <= n; i++)
    {
        std::cout << "Enter next number: ";
        std::cin >> *ptr;
        if (*ptr > max) { max = *ptr; }
        else if (*ptr < min) { min = *ptr; }
    }
    std::cout << "Maximum element: " << max << std::endl;
    std::cout << "Minimum element: " << min << std::endl;
    return 0;
}