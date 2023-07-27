#include <bits/stdc++.h>

using namespace std;

int n;

string strA;
string strB;

map<string, int> mp;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    mp["ChongChong"] = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> strA >> strB;

        if (mp[strA])
        {
            mp[strB] = 1;
        }
        else if (mp[strB])
        {
            mp[strA] = 1;
        }
    }

    for (auto& pair : mp)
    {
        res += pair.second;
    }

    cout << res;

    return 0;
}