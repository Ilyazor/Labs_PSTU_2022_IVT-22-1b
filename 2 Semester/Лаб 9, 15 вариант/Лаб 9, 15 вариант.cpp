#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ifstream fin("file1.txt");
	ofstream fout("file2.txt"); 


	if (!fin.is_open())
	{
		cout << "Error!";
		return -1;
	}

	string s;
	while (!fin.eof())
	{
		getline(fin, s, '\n');
		if (s[s.length() - 1] == 'A')
		{
			fout << s << '\n';
		}
	}
	fin.close();
	fout.close();

	fin.open("file2.txt");
	if (!fin.is_open())
	{
		cout << "Error!";
		return -1;
	}
	
	int cnt_a = 0, max = 0, max_pos = 1, pos = 0;
	char c;
	while (!fin.eof())
	{
		pos++;
		cnt_a = 0;
		getline(fin, s, '\n');
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'A')
			{
				cnt_a++;
			}
		}
		if (max <= cnt_a)
		{
			max = cnt_a;
			max_pos = pos;
		}
	}

	cout << "Position of a string with max count of symbol \"A\": " << max_pos;
	fin.close();
	return 0;
}