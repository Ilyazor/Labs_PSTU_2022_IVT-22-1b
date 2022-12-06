#include <iostream>

using namespace std;

int main()
{
#include <cmath>

    int n, k;

    cin >> n;

    k = sqrt(n);

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}