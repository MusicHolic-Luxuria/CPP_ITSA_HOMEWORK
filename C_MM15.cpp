#include <iostream>
using namespace std;

int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        if (x > 100 || y > 100)
            cout << "outside" << endl;
        else
            cout << "inside" << endl;
    }
}