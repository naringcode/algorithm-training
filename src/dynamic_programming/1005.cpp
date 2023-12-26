#include <bits/stdc++.h>

int t;
int n; // 건물의 개수
int k; // 건물간의 건설순서 규칙 개수
int d[1004]; // 건물 건설 비용

int a;
int b;
int w; // 목표 건물

vector<int> adj[1004];
// int indegrees[1004];

int dp[1004];

int go(int from)
{
    if (-1 != dp[from])
        return dp[from];

    dp[from] = d[from];

    for (int to : adj[from])
    {
        dp[from] = max(dp[from], go(to) + d[from]);
    }

    return dp[from];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        // 초기화
        for (int i = 0; i < 1004; i++)
        {
            adj[i].clear();
            // indegrees[i] = 0;

            dp[i] = -1;
        }

        cin >> n >> k;

        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }

        for (int i = 0; i < k; i++)
        {
            cin >> a >> b;
            a--;
            b--;

            // 역으로 연결(w를 기준으로 탐색해서 결과를 얻게 하기 위함)
            adj[b].push_back(a);
            // indegrees[a]++;
        }

        cin >> w;
        w--;

        cout << go(w) << '\n';
    }

    return 0;
}
