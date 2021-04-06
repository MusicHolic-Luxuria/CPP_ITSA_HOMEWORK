#include <iostream>
using namespace std;

int main()
{
    int year, flag;
    while (cin >> year)
    {
        flag = 0;
        if (year % 4 == 0)
        {
            flag = 1;
            if (year % 100 == 0)
            {
                flag = 0;
                if (year % 400 == 0)
                {
                    flag = 1;
                }
            }
        }
        if (flag == 0)
        {
            cout << "Common Year" << endl;
        }
        else
        {
            cout << "Bissextile Year" << endl;
        }
    }
}