#include <bits/stdc++.h>

using namespace std;

string str;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    int l = std::accumulate(str.begin(), str.end() - str.length() / 2, 0);
    int r = std::accumulate(str.end() - str.length() / 2, str.end(), 0);

    if (l == r)
    {
        cout << "LUCKY";
    }
    else
    {
        cout << "READY";
    }

    return 0;
}
