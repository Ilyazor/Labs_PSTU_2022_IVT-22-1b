#include <iostream>

using namespace std;

int main()
{
#include <cmath>

    float n, a, max;
    int i = 2;
    int count = 1;

    cin >> n;

    max = sin(n + 1 / n);

    while (i <= n)
    {
        a = sin(n + 1 / n);
        if (a > max)
        {
            max = a;
            count = 1;
        }
        else if (a == max)
        {
            count++;
        }
        i++;
    }

	cout << "Max element: " << max << " Number of elements with this value: " << count << endl;

	return 0;
}