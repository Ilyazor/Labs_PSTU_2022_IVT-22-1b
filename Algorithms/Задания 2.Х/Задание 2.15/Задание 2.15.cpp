#include <iostream>

using namespace std;

int main()
{
    int n, s, k;
    bool flag = false;

    cout << "Enter the number" << endl;
    cin >> n;
    cout << "What number to look for?" << endl;
    cin >> s;

    while (n > 0 && !flag)
    {
        k = n % 10;
        if (k == s)
        {
            flag = true;
            cout << "Digit found!" << endl;
        }
        else
        {
            n /= 10;
        }
    }

    if (!flag)
    {
        cout << "Digit not found!" << endl;
    }

    return 0;
}