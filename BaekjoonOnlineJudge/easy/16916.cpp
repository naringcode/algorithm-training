#include <bits/stdc++.h>

using namespace std;

string s;
string p;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> s >> p;

    if (strstr(s.c_str(), p.c_str()))
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    /*
    auto pos = s.find(p);

    if (pos == string::npos)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }
     */

    return 0;
}
