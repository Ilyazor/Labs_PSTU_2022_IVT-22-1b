// 9 Вариант
// F(x) = x - (1/(3 + sin(3.6 * x)))
// F'(x) = 1+((3.6 * cos(3.6 * x))/(2+sin(3.6 * x))^2)
// [0; 0.85]

#include <iostream>

int main()
{
#include <cmath>

    float x, xPrev;
    double lambda = -0.05; // -1/20
    x = 0.85; // можно выбрать любое x0 из [0, 0.85] — выбранного заранее промежутка
    xPrev = -1; //делаем заведомо сильно меньше x, чтобы цикл правильно сработал
    double eps = 0.000001;

    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = lambda * (xPrev - (1 / (3 + sin(3.6 * xPrev)))) + xPrev;
    }
    std::cout << "Root: " << x << std::endl;

    return 0;
}