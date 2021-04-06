#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double edge;
    while (cin >> edge)
    {
        cout << fixed << setprecision(1) << floor(edge * edge * 10 + 0.5) / 10 << endl; //處理浮點數不精確的問題
    }
}