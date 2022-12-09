#include <iostream>

using namespace std;

int main()
{
    int n, tmp, max, min;

    cout << "Enter sequence length:" << endl;
    cin >> n;

    cout << "Enter the first number:" << endl;
    cin >> tmp;
    max = tmp;
    min = tmp;

    for (int i = 2; i <= n; i++)
    {
        cout << "Enter the next number : " << endl;
        cin >> tmp;
        if (tmp > max)
        {
            max = tmp;
        }
        else if (tmp < min)
        {
            min = tmp;
        }
    }
    cout << "The sum of the maximum and minimum elements: " << (max + min) << endl;
}