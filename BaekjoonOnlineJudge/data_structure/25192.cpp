#include <bits/stdc++.h>

using namespace std;

int n;
string str;

map<string, int> mp;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        if ("ENTER" == str)
        {
            mp.clear();

            continue;
        }

        mp[str]++;

        if (1 == mp[str])
        {
            res++;
        }
    }

    cout << res;

    return 0;
}