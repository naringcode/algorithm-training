#include <bits/stdc++.h>

using namespace std;

int n;

vector<int> vec;
map<int, int> mp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 10; i++)
    {
        cin >> n;

        vec.push_back(n);

        mp[n]++;
    }

    cout << accumulate(vec.begin(), vec.end(), 0) / 10 << '\n';

    int res = 0;
    int mx  = 0;

    for (auto& pair : mp)
    {
        if (mx < pair.second)
        {
            res = pair.first;
            mx  = pair.second;
        }
    }

    cout << res;

    return 0;
}
