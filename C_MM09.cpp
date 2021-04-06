#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int x;
    while (cin >> x)
    {
        if (x > 31)
            cout << "Value of more than 31" << endl;
        else
            cout << (long long int)pow(2, x) << endl;
    }
}