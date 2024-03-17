#include <bits/stdc++.h>

using namespace std;

// 등비수열의 합
// n : 개수
// a : 초항
// l : 마지막 항
// n(a + l) / 2

uint64_t num;

uint64_t dp[104];

uint64_t go(uint64_t num)
{
    if (0 != dp[num])
        return dp[num];

    dp[num] += go(num - 1);
    dp[num] += (num * (1 + ((num * 2) - 1))) / 2;

    return dp[num];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    dp[0] = 1;
    dp[1] = 1;

    //for (int i = 1; i <= 100; i++)
    //{
    //    cout << go(i) << '\n';
    //}

    while (true)
    {
        cin >> num;

        if (0 == num)
            break;

        cout << go(num) << '\n';
    }

    return 0;
}
