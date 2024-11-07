#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;
int memo[1004];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    fill(memo, memo + 1004, -1);

    // 0 : CY, 1 : SK
    memo[1] = 0;
    memo[2] = 1;
    memo[3] = 0;

    for (int i = 4; i < 1004; i++)
    {
        memo[i] = memo[i - 3] == 1 ? 0 : 1;
    }

    cin >> n;

    if (memo[n] == 1)
    {
        cout << "SK";
    }
    else
    {
        cout << "CY";
    }

    return 0;
}
