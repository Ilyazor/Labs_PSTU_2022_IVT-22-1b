#include <iostream>

int a, b, c, max, min;

int main()
{

    std::cin >> a >> b >> c;

    int* pa = &a;

    int* pb = &b;

    int* pc = &c;

    if (*pa >= *pb)
    {
        max = *pa;
    }
    else
    {
        max = *pb;
    }

    if (*pc > max)
    {
        max = *pc;
    }


    if (*pa <= *pb)
    {
        min = *pa;
    }
    else
    {
        min = *pb;
    }

    if (*pc < min)
    {
        min = *pc;
    }

    std::cout <<"max:" << max << std::endl;
    std::cout << "min:" << min << std::endl;
    return 0;
}