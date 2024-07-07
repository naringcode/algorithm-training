#include <bits/stdc++.h>

using namespace std;

string a;
string b;
string c;
string d;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c >> d;

    a += b;
    c += d;

    cout << atoll(a.data()) + atoll(c.data());

    return 0;
}
