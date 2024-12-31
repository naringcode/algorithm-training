#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int n;

ll dp[100'004][4];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    dp[1][1] = 1; // 1일 때 뒤가 1로 끝나는 건 "1"
    dp[2][2] = 1; // 2일 때 뒤가 2로 끝나는 건 "2"
    dp[3][1] = 1; // 3일 때 뒤가 1로 끝나는 건 "2 + 1"
    dp[3][2] = 1; // 3일 때 뒤가 2로 끝나는 건 "1 + 2"
    dp[3][3] = 1; // 3일 때 뒤가 3으로 끝나는 건 "3"

    // 1은 2와 3 다음에 오는 수
    // 2는 1과 3 다음에 오는 수
    // 3은 1과 2 다음에 오는 수
    for (int i = 4; i <= 100'000; i++)
    {
        dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % 1'000'000'009;
        dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % 1'000'000'009;
        dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % 1'000'000'009;
    }
    
    cin >> t;
    
    while (t--)
    {
        cin >> n;

        ll res = dp[n][1] + dp[n][2] + dp[n][3];
        res %= 1'000'000'009;

        cout << res << '\n';
    }

    return 0;
}
