#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{

    int enter, a, b, s;
    cin >> enter;
    for (int i = 0; i < enter; i++)
    {
        cin >> a;
        cin >> b;
        s = (a * 1 + b * 2) + 1;
        if (a == 0 && b == b)
        {
            s = 1;
        }
        cout << s << endl;
    }

    return 0;
}