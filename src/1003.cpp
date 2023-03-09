#include <iostream>

using namespace std;

int case0;
int case1;

int dp[41] = { 0, 1, };

void make_fibo()
{
    for (int i = 2; i < 41; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    int num;

    make_fibo();

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if (num == 0)
        {
            cout << 1 << ' ' << 0 << '\n';
        }
        else if (num == 1)
        {
            cout << 0 << ' ' << 1 << '\n';
        }
        else
        {
            cout << dp[num - 1] << ' ' << dp[num] << '\n';
        }
    }

    return 0;
}
