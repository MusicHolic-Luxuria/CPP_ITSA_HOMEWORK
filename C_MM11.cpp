#include <iostream>
using namespace std;

int main()
{
    long long int price;
    while (cin >> price)
    {
        long long int NT_10, NT_5, NT_1;
        NT_10 = price / 10;
        NT_5 = price % 10 / 5;
        NT_1 = price % 10 % 5;
        cout << "NT10=" << NT_10 << endl;
        cout << "NT5=" << NT_5 << endl;
        cout << "NT1=" << NT_1 << endl;
    }
}