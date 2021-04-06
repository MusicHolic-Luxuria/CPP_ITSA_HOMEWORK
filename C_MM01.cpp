#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float top, bottom, height;
    cin >> top >> bottom >> height;
    cout << "Trapezoid area:" << fixed << setprecision(1) << (top + bottom) * height / 2 << endl;
}