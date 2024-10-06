#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;

string str;
map<string, int> mp;

int mx;
string res;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> str;
        
        mp[str]++;
    }

    for (auto&[str, cnt] : mp)
    {
        if (mx < cnt)
        {
            mx = cnt;

            res = str;
        }
    }

    cout << res;

    return 0;
}
