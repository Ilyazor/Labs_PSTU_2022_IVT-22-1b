#include <iostream>

int a, n, fac;

int main()
{
    std::cout << "factorial kakogo chisla?"<< std::endl; 
    
    std::cin >> n;

    int* pn = &n;

    fac = 1;

    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }

    *pn = fac;

    std::cout << n << std::endl;

    return 0;
}