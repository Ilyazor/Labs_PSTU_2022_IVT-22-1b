#include <iostream>
#include <string>

using namespace std;

int main()
{
	char tmp, s[256];
	cout << "Vvedite stroku: " << endl;
	cin.getline(s, 256);

	for (int i = 0; i < string(s).length() - 1; i++)
	{
		for (int j = 0; j < string(s).length() - i - 1; j++)
		{
			if (s[j] > s[j + 1])
			{
				tmp = s[j - 1];
				s[j - 1] = s[j];
				s[j] = tmp;
			}
		}
	}

	cout << s;

	return 0;
}