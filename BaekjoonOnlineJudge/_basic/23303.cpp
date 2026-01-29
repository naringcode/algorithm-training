#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    getline(cin, str);

    if (str.find("d2") != string::npos || str.find("D2") != string::npos)
    {
        println("D2");
    }
    else
    {
        println("unrated");
    }

    return 0;
}
