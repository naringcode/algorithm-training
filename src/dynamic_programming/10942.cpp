#include <bits/stdc++.h>

using namespace std;

int n;
int arr[2004];

int m;
int s;
int e;

int dp[2004][2004];

int go(int start, int end)
{
    int& memo = dp[start][end];

    if (-1 != memo)
        return memo;

    if (start >= end)
    {
        memo = 1;
    }
    else if (arr[start] != arr[end])
    {
        memo = 0;
    }
    else if (arr[start] == arr[end])
    {
        memo = go(start + 1, end - 1);
    }

    return memo;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    memset(dp, -1, sizeof(dp));

    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> s >> e;

        s--;
        e--;

        cout << go(s, e) << '\n';
    }

    return 0;
}
