#include <iostream>
using namespace std;
long long int function(long long int a);

int main()
{
    long long int x;
    while (cin >> x)
    {
        cout << function(x) << endl;
    }
}

long long int function(long long int a)
{
    if (a <= 1)
        return 1;
    else
        return (a * function(a - 1));
}