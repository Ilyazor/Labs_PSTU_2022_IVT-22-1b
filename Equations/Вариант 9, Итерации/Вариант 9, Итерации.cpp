// 9 �������
// F(x) = x - (1/(3 + sin(3.6 * x)))
// F'(x) = 1+((3.6 * cos(3.6 * x))/(2+sin(3.6 * x))^2)
// [0; 0.85]

#include <iostream>

int main()
{
#include <cmath>

    float x, xPrev;
    double lambda = -0.05; // -1/20
    x = 0.85; // ����� ������� ����� x0 �� [0, 0.85] � ���������� ������� ����������
    xPrev = -1; //������ �������� ������ ������ x, ����� ���� ��������� ��������
    double eps = 0.000001;

    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = lambda * (xPrev - (1 / (3 + sin(3.6 * xPrev)))) + xPrev;
    }
    std::cout << "Root: " << x << std::endl;

    return 0;
}