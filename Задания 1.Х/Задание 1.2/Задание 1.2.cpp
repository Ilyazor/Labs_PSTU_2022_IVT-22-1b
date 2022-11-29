#include <iostream>

using namespace std;

int main()
{
    float a, b;

    cin >> a >> b;

    if (b == 0)
    {
        cout << "You can't divide by zero!" << endl;
    }
    else
    {
        cout << a / b << endl;
    }
    return 0;
}