#include <bits/stdc++.h>
using namespace std;

int main()
{
    // enter days to see the years,weeks and days

    int input, years, weeks, days;
    cin >> input;
    years = input / 365;
    weeks = (input % 365) / 7;
    days = (input % 365) % 7;

    cout << years << endl
         << weeks << endl
         << days;

    return 0;
}