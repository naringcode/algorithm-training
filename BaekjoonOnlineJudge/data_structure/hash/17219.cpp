#include <bits/stdc++.h>

using namespace std;

int n;
int m;

string site;
string pw;

map<string, string> mp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> site >> pw;

        mp[site] = pw;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> site;

        cout << mp[site] << '\n';
    }

    return 0;
}
