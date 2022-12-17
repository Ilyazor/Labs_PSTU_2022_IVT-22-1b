#include<iostream>
#include<string>

int main()
{
    setlocale(LC_ALL, "RUS");

    int countC, countV;
    countC = countV = 0;

    std::string st;
    //Введённые русские буквы код никак воспринимать не хочет. Так что будет работать с английскими.
    std::cout << "Введите строку на английском: " << std::endl;
    std::cin >> st;

    const char* pt = st.c_str();

    for (int i = 0; i < st.length(); i++)
    {
        switch (*pt)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'Y':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            countV++;
            break;
        default:
            countC++;
            break;
        }
        *pt++;
    }

    std::cout << "Количество гласных:  " << countV << std::endl;
    std::cout << "Количество согласных:  " << countC << std::endl;

    return 0;
}