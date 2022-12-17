// 9 Вариант
// F(x) = x - (1/(3+sin3.6x)
// [0; 0.85]

#include <iostream>

int main()
{
#include <cmath>

    float a, b, c;
    float fA, fB, fC;
    double eps = 0.000001;
    a = 0;
    b = 0.85;
    while (b - a > eps)
    {
        c = (a + b) / 2;
        fA = a - (1 / (3 + sin(3.6 * a)));
        fB = b - (1 / (3 + sin(3.6 * b)));
        fC = c - (1 / (3 + sin(3.6 * c)));
        if (fA * fC < 0) { b = c; }
        else if (fC * fB < 0) { a = c; }
        else { std::cout << "Error!" << std::endl; }
    }
    std::cout << "Roots: " << a << "; " << b << std::endl;

    return 0;
}