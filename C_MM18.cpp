#include <iostream>
using namespace std;
int power(int a, int b);

int main()
{
    int x;
    while (cin >> x)
    {
        int x_bits[8] = {0};
        int time = 0;
        while (time < 8)
        {
            if (x & (int)power(2, time))
                x_bits[time] = 1;
            time++;
        }

        for (int i = 7; i >= 0; i--)
        {
            cout << x_bits[i];
        }
        cout << endl;
    }
}

int power(int a, int b)
{
    int sum = 1;
    if (b == 0)
        return 1;
    else
    {
        for (; b > 0; b--)
            sum *= a;
        return sum;
    }
}