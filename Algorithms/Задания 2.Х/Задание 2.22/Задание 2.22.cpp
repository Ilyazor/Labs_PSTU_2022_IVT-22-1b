#include <iostream>

using namespace std;

int main()
{
#include <cmath>

    float n, a, max;
    int i = 2;
    int num = 1;

    cin >> n;

    max = sin(n + 1 / n);

	while (i <= n)
	{
		a = sin(n + i / n);
		if (a > max)
		{
			max = a;
			num = i;
		}
		i++;
	}
    cout << "Max element: " << max << " It's number: " << num << endl;

    return 0;
}