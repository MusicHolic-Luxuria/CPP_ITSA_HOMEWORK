#include <iostream>
using namespace std;

int main()
{
    int x;
    while (cin >> x)
    {
        for (int i = 1; i <= x; i++)
        {
            if (i % 35 == 0 && i == 35)
                cout << i;
            else if (i % 35 == 0)
                cout << " " << i;
        }
        cout << endl;
    }
}