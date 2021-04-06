#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int time;
    while (cin >> time)
    {
        double money = 0;
        if (time >= 1500)
        {
            while (time--)
            {
                money += 0.9 * 0.79;
            }
        }
        else if (time > 800 && time < 1500)
        {
            while (time--)
            {
                money += 0.9 * 0.9;
            }
        }
        else
        {
            while (time-- > 0)
            {
                money += 0.9;
            }
        }
        cout << fixed << setprecision(1) << money << endl;
    }
}