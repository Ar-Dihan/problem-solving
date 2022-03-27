#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "\n\nThat's the amount it can break into smallest possible number of bank notes.\n\n";

    int input, a100, b50, c20, d10, e5, f2, g1;

    // user input:
    cin >> input;

    a100 = input / 100;
    b50 = (input % 100) / 50;
    c20 = ((input % 100) % 50) / 20;
    d10 = (((input % 100) % 50) % 20) / 10;
    e5 = ((((input % 100) % 50) % 20) % 10) / 5;
    f2 = (((((input % 100) % 50) % 20) % 10) % 5) / 2;
    g1 = ((((((input % 100) % 50) % 20) % 10) % 5) % 2) / 1;

    cout << a100 << " 100 notes\n"
         << b50 << " 50 notes\n"
         << c20 << " 20 notes\n"
         << d10 << " 10 notes\n"
         << e5 << " 5 notes\n"
         << f2 << " 2 notes\n"
         << g1 << " 1 notes\n";

    return 0;
}