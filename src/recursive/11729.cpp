#include <bits/stdc++.h>

using namespace std;

int n;

vector<pair<int, int>> res;

void go(int n, int from, int to, int by)
{
    if (1 == n)
    {
        res.push_back({ from, to });

        return;
    }

    go(n - 1, from, by, to);
    
    res.push_back({ from, to });
    
    go(n - 1, by, to, from);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    go(n, 1, 3, 2);

    cout << res.size() << '\n';

    for (auto& pair : res)
    {
        cout << pair.first << ' ' << pair.second << '\n';
    }

    return 0;
}