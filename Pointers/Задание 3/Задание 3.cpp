#include <iostream>

float a = 5.5;
float b = 10.3;
float summ;

int main()
{
    float* pa = &a;

    float* pb = &b;

    summ = *pb + *pa;

    std::cout << "summ: " << summ << std::endl;

    return 0;
}