#include <iostream>
using namespace std;

void lg(int x)
{
	cout << "log" << "(" << x << ")" << " = " << log(x) << endl;
}

void lg(double x)
{
	cout << "log10" << "(" << x << ")" << " = " << log10(x) << endl;
}

int main()
{
	lg(9000);
	lg(9000.0);

	return 0;
}