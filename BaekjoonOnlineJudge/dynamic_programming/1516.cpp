#include <bits/stdc++.h>

using namespace std;

int n;
int a;

vector<int> adj[504];
int arr[504];

int dp[504];

int go(int here)
{
    if (-1 != dp[here])
        return dp[here];

    int& memo = dp[here];

    memo = arr[here];

    for (int there : adj[here])
    {
        memo = max(memo, go(there) + arr[here]);
    }

    return memo;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        dp[i] = -1;

        // 건설 시간
        cin >> arr[i];

        // 선행 노드
        while (true)
        {
            cin >> a;

            if (-1 == a)
                break;

            adj[i].push_back(a);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << go(i) << '\n';
    }

    return 0;
}