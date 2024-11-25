#include <bits/stdc++.h>

using namespace std;

int n;
int memo[1004];

constexpr int SK = 1;
constexpr int CY = 2;

map<int, string> mp{ { SK, "SK" }, { CY, "CY" } };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    memo[1] = SK;
    memo[2] = CY;
    memo[3] = SK;
    
    for (int i = 4; i <= n; i++)
    {
        memo[i] = memo[i - 2];
    }

    cout << mp[memo[n]];

    return 0;
}