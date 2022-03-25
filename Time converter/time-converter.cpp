#include <bits/stdc++.h>
using namespace std;

int main()
{

    // enter seconds to see the hours,minutes and seconds

    long input, hours, minutes, seconds;
    cin >> input;
    hours = input / 365;
    minutes = (input % 365) / 7;
    seconds = (input % 365) % 7;

    cout << hours << endl
         << minutes << endl
         << seconds;
    return 0;
}