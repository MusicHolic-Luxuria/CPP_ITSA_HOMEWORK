#include <iostream>
using namespace std;
int power(int a, int b);

int main()
{
    int x;
    while (cin >> x)
    {
        int hundred, ten, one;
        hundred = x / 100;
        ten = x % 100 / 10;
        one = x % 10;
        if (power(hundred, 3) + power(ten, 3) + power(one, 3) == x)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}

int power(int a, int b)
{
    int sum = 1;
    if (b == 0)
        return 1;
    else
    {
        for (; b > 0; b--)
            sum *= a;
        return sum;
    }
}