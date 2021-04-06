#include <iostream>
using namespace std;

int main()
{
    int x;
    while (cin >> x)
    {
        while (x--)
        {
            int flag = 1;
            for (int i = 2; i < x; ++i)
            {
                if (x % i == 0)
                {
                    flag = 0;
                    continue;
                }
            }
            if (flag == 1)
            {
                cout << x << endl;
                break;
            }
        }
    }
}