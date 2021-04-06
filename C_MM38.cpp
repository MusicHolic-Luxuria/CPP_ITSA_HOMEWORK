#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    while (cin >> x >> y >> z)
    {
        if (x + y > z && y + z > x && z + x > y)
            cout << "fit" << endl;
        else
            cout << "unfit" << endl;
    }
}