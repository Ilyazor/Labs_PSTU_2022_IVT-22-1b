// 9 Вариант
// F(x) = x - (1/(3 + sin(3.6 * x)))
// F'(x) = 1+((3.6 * cos(3.6 * x))/(2+sin(3.6 * x))^2)
// [0; 0.85]

#include <iostream>

int main()
{
#include <cmath>

    float x, xPrev;
    x = 2;
    xPrev = 0;
    double eps = 0.000001;

    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = xPrev - ((xPrev - (1 / (3 + sin(3.6 * xPrev)))) / (1 + ((3.6 * cos(3.6 * xPrev)) / pow((3 + sin(3.6 * xPrev)), 2))));
    }
    std::cout << "Root: " << x << std::endl;

    return 0;
}