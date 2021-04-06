#include <iostream>
using namespace std;

int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        cout << x << "+" << y << "=" << x + y << endl;
        cout << x << "*" << y << "=" << x * y << endl;
        cout << x << "-" << y << "=" << x - y << endl;
        if (x % y >= 0)
        {
            cout << x << "/" << y << "=" << x / y << "..." << x % y << endl;
        }
        else
        {
            if (y > 0)
                cout << x << "/" << y << "=" << (x / y) - 1 << "..." << (x % y) + abs(y) << endl;
            else
                cout << x << "/" << y << "=" << (x / y) + 1 << "..." << (x % y) + abs(y) << endl;
        }
    }
}