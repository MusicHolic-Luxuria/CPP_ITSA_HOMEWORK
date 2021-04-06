#include <iostream>
using namespace std;

int main()
{
    int x;
    while (cin >> x)
    {
        int sum = 0;
        for (int i = 0; i <= x; i++)
        {
            if (i % 6 == 0 && i % 12 != 0)
                sum += i;
        }
        cout << sum << endl;
    }
}