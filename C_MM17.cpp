#include <iostream>
using namespace std;

int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        if (x < y) //把x>y
        {
            int temp = x;
            x = y;
            y = temp;
        }

        for (int i = y; i > 0; i--)
        {
            if (x % i == 0 && y % i == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
}