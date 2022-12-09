#include <iostream>
using namespace std;

int main()
{
    int n, tmp;

    bool plusFirst = false; 
    bool minusFirst = false; 

    cout << "Enter sequence length:" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter the numbers:" << endl;
        cin >> tmp;
        if (!plusFirst && !minusFirst)
        {
            if (tmp > 0) { plusFirst = true; }
            else if (tmp < 0) { minusFirst = true; }
        }
    }

    if (plusFirst)
    {
        cout << "First was positive number first";
    }
    else if (minusFirst)
    {
        cout << "First was negative number first";
    }
    else
    {
        cout << "All elements are zeros";
    }
    cout << endl;
    return 0;
}