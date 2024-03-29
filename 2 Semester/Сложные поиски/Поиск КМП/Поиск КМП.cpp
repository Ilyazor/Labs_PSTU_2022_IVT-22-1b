#include <iostream>
#include <string>

using namespace std;

int find(string str, string substr)
{
    int strSize, substrSize;
    strSize = str.size();
    substrSize = substr.size();

    int* pref = new int[substrSize];

    int i = 0;
    int j = -1;
    pref[0] = -1;

    while (i < substrSize - 1)
    {
        while ((j >= 0) && (substr[j] != substr[i]))
        {
            j = pref[j];
        }
        i++;
        j++;
        if (substr[i] == substr[j])
        {
            pref[i] = pref[j];
        }
        else
        {
            pref[i] = j;
        }
        i = 0;
        j = 0;
        for (i = 0, j = 0; (i <= strSize - 1) && (j <= substrSize - 1); i++, j++)
        {
            while ((j >= 0) && (substr[j]) != str[i])
            {
                j = pref[j];
            }
        }
        delete[] pref;
        if (j == substrSize) { return i - j; }
        else return -1;
    }
}

int main()
{
    string inputStr, searchStr;
    cin >> inputStr;
    cin >> searchStr;
    int idx = find(inputStr, searchStr);
    if (idx == -1) { cout << "Not found!"; }
    else { cout << idx; }
    return 0;
}