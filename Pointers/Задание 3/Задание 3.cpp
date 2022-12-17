#include <iostream>

int main()
{
    float a, b, * ptr1, * ptr2, sum = 0;

    std::cin >> a >> b;

    ptr1 = &a;
    ptr2 = &b;

    sum = *ptr1 + *ptr2;
    
    std::cout << sum;

    return 0;
}