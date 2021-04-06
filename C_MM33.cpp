#include <iostream>
using namespace std;

int main()
{
    int x;
    while (cin >> x)
    {
        for (int i = 6; i <= x; i += 2) //上網查說至今找到的完整數只有偶數
        {
            int sum = 0;
            for (int j = 1; j < i; j++)
            {
                if (i % j == 0)
                    sum += j;
            }
            if (sum == i)
            {
                if (i == 6)
                    cout << "6";
                else
                    cout << " " << i;
            }
        }
        cout << endl;
    }
}