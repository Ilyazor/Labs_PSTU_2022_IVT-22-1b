#include<iostream>
#include<ctime>
using namespace std;

void fillArr(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            arr[i][j] = rand() % 10;
    }
}

void showArr(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void delMin(int** a, int& rows, int& cols, int m_i, int m_j)
{
    int** tmp = new int* [rows - 1];

    for (int i = 0; i < rows; i++)
    {
        tmp[i] = new int[cols - 1];
    }

    for (int i = rows; i < cols - 1; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            a[i][j] = a[i + 1][j];
        }
    }
        
    for (int i = 0; i < cols; i++)
    {
        for (int j = rows; j < cols - 1; j++)
        {
            a[i][j] = a[i][j + 1];
        }
    }
        
    rows--;
    cols--;

    a = tmp;
}
int main()
{
    int rows, cols;

    cout << "Enter rows: ";
    cin >> rows;

    cout << "Enter columns: ";
    cin >> cols;

    int** arr = new int* [rows];

    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    fillArr(arr, rows, cols);
    showArr(arr, rows, cols);

    int min = arr[0][0];
    int m_i = 0, m_j = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > min)
            {
                min = arr[i][j];
                m_i = i;
                m_j = j;
            }
        }
    }

    delMin(arr, rows, cols, m_i, m_j);
    showArr(arr, rows, cols);

    delete[] arr;
    return 0;
}