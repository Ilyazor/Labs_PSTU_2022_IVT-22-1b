#include <iostream>

int main()
{
    int n, fact = 1;
    int* f = &fact;

    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        *f *= i;
    }
    std::cout << "Factorial of " << n << " is " << fact << std::endl;

    return 0;
}