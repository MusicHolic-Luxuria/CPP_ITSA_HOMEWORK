#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double distance;
    while (cin >> distance)
    {
        cout << fixed << setprecision(1) << floor(distance * 1.6 * 10 + 0.5) / 10 << endl; //處理浮點數不精確的問題
    }
}