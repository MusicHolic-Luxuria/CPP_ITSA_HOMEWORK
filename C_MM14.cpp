#include <iostream>
using namespace std;

int main()
{
    long long int time, day, hour, min, sec;
    while (cin >> time)
    {
        sec = time % 60;
        time = time / 60;
        min = time % 60;
        time = time / 60;
        hour = time % 24;
        time = time / 24;
        day = time;
        cout << day << " days" << endl;
        cout << hour << " hours" << endl;
        cout << min << " minutes" << endl;
        cout << sec << " seconds" << endl;
    }
}