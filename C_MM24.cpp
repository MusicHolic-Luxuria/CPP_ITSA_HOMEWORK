#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int hour, pay;
    while (cin >> hour >> pay)
    {
        double money = 0;
        while (hour > 120)
        {
            hour--;
            money += pay * 1.66;
        }
        while (hour > 60)
        {
            hour--;
            money += pay * 1.33;
        }
        while (hour > 0)
        {
            hour--;
            money += pay;
        }
        cout << fixed << setprecision(1) << money << endl;
    }
}