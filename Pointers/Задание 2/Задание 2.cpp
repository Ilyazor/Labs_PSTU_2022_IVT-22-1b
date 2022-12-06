#include <iostream>

int a = 5;
int b = 10;
int summ;

int main()
{
    int* pa = &a;

    int* pb = &b;

    summ = *pb + *pa;

    std::cout << "summ: " << summ << std::endl;

    return 0;
}