#include <iostream>
using namespace std;

int main()
{
    int n, tmp, max;

    cout << "Enter sequence length:" << endl;
    cin >> n;

    cout << "Enter the first number:" << endl;
    cin >> max;

    for (int i = 2; i <= n; i++)
    {
        cout << "Enter next number:" << endl;
        cin >> tmp;
        if (tmp > max)
        {
            max = tmp;
        }
    }
    cout << "Maximum element: " << max << endl;
    return 0;
}