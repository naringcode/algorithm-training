#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int v;

int a;
pair<int, ll> b;

vector<pair<int, ll>> adj[10'004];

ll res;

// 가장 긴 것 2개 선택

ll go(int here)
{
    if (0 == adj[here].size())
        return 0;

    vector<ll> temp;
    temp.push_back(0); // 노드 하나만 있는 것 에러 방지용도

    for (auto& pair : adj[here])
    {
        temp.push_back(go(pair.first) + pair.second); // 가장 긴 간선 계산
    }

    sort(temp.begin(), temp.end(), greater<ll>());

    res = max(res, temp[0] + temp[1]);

    // cout << res << '\n';

    return temp[0];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> v;

    for (int i = 0; i < v - 1; i++)
    {
        cin >> a;

        cin >> b.first;
        cin >> b.second;

        adj[a].push_back(b);
    }

    go(1);

    cout << res;

    return 0;
}