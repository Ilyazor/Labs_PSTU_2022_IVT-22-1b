#include <iostream>

using namespace std;

int main()
{
    int n; int product = 1;

    cin >> n;

    if (n <= 0)
    {
        cout << "It is impossible to calculate the product of natural numbers for n <= 0" << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            product *= i;
        }
        cout << product << endl;
    }
    return 0;
}