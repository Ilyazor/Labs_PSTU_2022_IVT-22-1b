#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdarg.h>

int sum(int n, ...)
{
    int result = 0;
    va_list factor; 
    va_start(factor, n); 
    for (int i = 0;i < n; i++)
    {
        result += va_arg(factor, int); 
    }
    va_end(factor);
    return result;

}

int main()
{
    cout << sum(3, 1, 2, 3) << endl;
    cout << sum(7, 12, 21, 13, 4, 5, 8, 2) << endl;
    cout << sum(11, 7, 2, 22, 8, 1, 19, 23, 18, 31, 28, 25) << endl;
    return 0;
}