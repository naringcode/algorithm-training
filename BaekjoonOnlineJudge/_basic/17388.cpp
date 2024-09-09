#include <bits/stdc++.h>

using namespace std;

int a;
int b;
int c;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c;

    if (a + b + c >= 100)
    {
        cout << "OK";

        return 0;
    }

    if (a < b && a < c)
    {
        cout << "Soongsil";
    }
    else if (b < a && b < c)
    {
        cout << "Korea";
    }
    else
    {
        cout << "Hanyang";
    }

    return 0;
}
