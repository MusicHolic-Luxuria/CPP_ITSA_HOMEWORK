#include <iostream>
using namespace std;

int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        cout << (x + y) * (abs(x - y) + 1) / 2 << endl;
    }
}