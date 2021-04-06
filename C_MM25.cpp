#include <iostream>
using namespace std;

int main()
{
    int x;
    while (cin >> x)
    {
        int top = x;
        for (; top; top--)
        {
            if (top % 3 == 0)
            {
                break;
            }
        }
        int height = top / 3 + 1; //高有0這個數所以+1
        cout << top * height / 2 << endl;
    }
}