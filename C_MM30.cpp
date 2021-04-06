#include <iostream>
using namespace std;

int main()
{
    int x;
    while (cin >> x)
    {
        if (x == 1)
            cout << "NO" << endl;
        if (x == 2)
            cout << "YES" << endl;
        int flag = 1;
        for (int i = 2; i < x; ++i)
        {
            if (x % i == 0)
            {
                flag = 0;
                cout << "NO" << endl;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
    }
}