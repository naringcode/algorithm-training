#include <bits/stdc++.h>

using namespace std;

int n;
int c;

map<int, pair<int, int>> mp;

vector<tuple<int, int, int>> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> c;

    for (int i = 0; i < n; i++)
    {
        cin >> c;

        if (0 == mp[c].first)
        {
            mp[c].first = n - i;
        }

        mp[c].second++;
    }

    for (auto& pair : mp)
    {
        res.push_back({ pair.second.second, pair.second.first, pair.first });
    }

    sort(res.begin(), res.end(), greater());

    for (auto& tuple : res)
    {
        int num;
        int cnt;
        int temp;

        tie(cnt, temp, num) = tuple;

        while(cnt--)
        {
            cout << num << ' ';
        }
    }

    return 0;
}