#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double c;
    while (cin >> c)
    {
        cout << fixed << setprecision(1) << floor((c * 1.8 + 32) * 10 + 0.5) / 10 << endl; //處理浮點數不精確的問題
    }
}