#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double distance;
    while (cin >>distance)
    {
        cout << (int)ceil(distance / (1 - (30 * 0.0254))) << endl;
    }
}