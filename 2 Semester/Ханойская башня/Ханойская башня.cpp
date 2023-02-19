#include <iostream>
using namespace std;

void tower(int n, char from, char to, char tmp)
{
    setlocale(LC_ALL, "RUS");
    if (n == 0)
    {
        return;
    }
    tower(n - 1, from, tmp, to);
    cout << "����������� ������ " << n << " �� " << from << " � " << to << endl;
    tower(n - 1, tmp, to, from);
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int n;

    cout << "������� ���������� �����: ";
    cin >> n;
    cout << endl;

    tower(n, '1', '3', '2');
    return 0;
}