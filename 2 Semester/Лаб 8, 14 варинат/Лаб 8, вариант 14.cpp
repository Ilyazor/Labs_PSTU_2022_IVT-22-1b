#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;

int numStad;

struct Stadion
{
	string name; //Название
	string adress; //Адрес
	int space; //Вместимость
	string sports; //Виды спорта
};

 Stadion arr[100];

void addStadion() 
{
    cout << "Enter Stadions: " << endl; 
    cin >> numStad;
    for (int i = 0; i < numStad; i++) 
    {
        cout << "Enter name: " << endl;
        cin >> arr[i].name;
        cout << "Enter adress: " << endl;
        cin >> arr[i].adress;
        cout << "Enter space: " << endl;
        cin >> arr[i].space;
        cout << "Enter sports: " << endl;
        cin >> arr[i].sports;
        cout << endl;
    }
}

void addNewStadion() 
{
    int num;

    numStad++;

    cout << "After which stadion to add the new stadion: " << endl;
    cin >> num;

    for (int i = num; i < numStad; i++)
        arr[i + 1] = arr[i];

    cout << "Enter name: " << endl;
    cin >> arr[num].name;
    cout << "Enter adress: " << endl;
    cin >> arr[num].adress;
    cout << "Enter space: " << endl;
    cin >> arr[num].space;
    cout << "Enter sports: " << endl;
    cin >> arr[num].sports;
    cout << endl;
}

void printStadion() 
{
    for (int i = 0; i < numStad; i++) 
    {
        cout << "Number:\t\t" << i + 1 << endl;
        cout << "Surname:\t" << arr[i].name << endl;
        cout << "Post:\t\t" << arr[i].adress << endl;
        cout << "Year of birth:\t" << arr[i].space << endl;
        cout << "Zp:\t\t" << arr[i].sports << endl;
        cout << endl;
    }
    cout << endl;
}

void deleteStadion() 
{
    int num;
    cout << "Which stadion need to remove?: " << endl;
    cin >> num;
    for (int i = num - 1; i < numStad; i++)
        arr[i] = arr[i + 1];
    numStad--;
}

int main() 
{
    cout << "Add stadions:" << endl;

    addStadion();
    printStadion();

    deleteStadion();
    printStadion();

    addNewStadion();
    printStadion();
}