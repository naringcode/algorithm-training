#include <bits/stdc++.h>

using namespace std;

int n;
int res;

// 1 -> 9
// 2 -> 90 / 99
// 3 -> 900 / 999
// 4 -> 9000 / 9999
//
// 수의 개수 허용 여부를 기준으로 판단

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    int sum = 0;
    int nxt = 9;
    int digit = 1;

    while (sum + nxt < n)
    {
        res += nxt * digit;
        sum += nxt;

        digit++;
        nxt *= 10;
    }

    res += (n - sum) * digit;

    cout << res;

    return 0;
}
