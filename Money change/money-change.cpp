#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "That's the amount it can break into smallest possible number of bank notes.\n\n\n";

    int input, a100, b50, c20, d10, e5, f2, g1;

    // user input:
    cin >> input;

    a100 = input / 100;
    cout << a100 << " notes\n";

    b50 = (input % 100) / 50;
    cout << b50 << " notes\n";

    c20 = ((input % 100) % 50) / 20;
    cout << c20 << " notes\n";

    d10 = (((input % 100) % 50) % 20) / 10;
    cout << d10 << " notes\n";

    e5 = ((((input % 100) % 50) % 20) % 10) / 5;
    cout << e5 << " notes\n";

    f2 = (((((input % 100) % 50) % 20) % 10) % 5) / 2;
    cout << f2 << " notes\n";

    g1 = ((((((input % 100) % 50) % 20) % 10) % 5) % 2) / 1;
    cout << g1 << " notes\n";

    return 0;
}