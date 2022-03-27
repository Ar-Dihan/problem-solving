#include <bits/stdc++.h>
using namespace std;

int main()
{

    // enter seconds to see the hours,minutes and seconds

    long input, hours, minutes, seconds;

    cin >> input;

    hours = input / 3600;
    minutes = (input % 3600) / 7;
    seconds = (input % 3600) % 7;

    cout << hours << " hours" << endl
         << minutes << " minutes" << endl
         << seconds << " seconds";
    return 0;
}
