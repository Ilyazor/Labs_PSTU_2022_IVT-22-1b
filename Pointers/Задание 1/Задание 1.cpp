#include <iostream>

int a = 5;
int b = 10;

int main()
{
    int* pa = &a;
    
    int* pb = &b;

    *pa = 10;

    *pb = 5;

    std::cout << "a: " << a << " b: " << b << std::endl;

    return 0;
}