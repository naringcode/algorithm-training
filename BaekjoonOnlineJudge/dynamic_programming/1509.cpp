#include <bits/stdc++.h>

using namespace std;

string str;

int dp_palin[2504][2504];
int dp_cnt[2504];

int go_palin(int start, int end)
{
    int& memo = dp_palin[start][end];

    if (-1 != memo)
        return memo;

    if (start >= end)
    {
        memo = 1;
    }
    else if (str[start] != str[end])
    {
        memo = 0;
    }
    else if (str[start] == str[end])
    {
        memo = go_palin(start + 1, end - 1);
    }

    return memo;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    memset(dp_palin, -1, sizeof(dp_palin));
    fill(dp_cnt, dp_cnt + 2504, 999'999'999);

    cin >> str;

    dp_cnt[0] = 0;

    for (int i = 1; i <= str.length(); i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (go_palin(j - 1, i - 1)) // i는 end, j가 start임
            {
                dp_cnt[i] = min(dp_cnt[i], dp_cnt[j - 1] + 1);
            }
        }
    }

    cout << dp_cnt[str.length()];

    return 0;
}
