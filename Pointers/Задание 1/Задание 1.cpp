#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    
    int* pa = &a;
    int* pb = &b;

    int* t = pa;
    pa = pb;
    pb = t;

    std::cout << *pa << " " << *pb << std::endl;

    return 0;
}