#include <bits/stdc++.h>

using namespace std;

const int INF = -999'999'999;

int t;
int w; // 자두가 움직일 수 있는 횟수

int arr[1004];
int dp[1004][34][2];

int res;

// 1. 움직인다.
// 2. 안 움직인다.
// 3. 못 움직인다(2번이랑 비슷?)
//
// DP 유형인데 일단 트리처럼 경우의 수가 뻗어나갈 수 있다.

// void go(int time, int pos, int remaining, int cnt)
// {
//     if (t == time)
//     {
//         res = max(res, cnt);
//
//         return;
//     }
//
//     if (arr[time] == pos)
//     {
//         cnt++;
//     }
//
//     go(time + 1, pos, remaining, cnt);
//
//     if (remaining)
//     {
//         go(time + 1, (pos + 1) % 2, remaining - 1, cnt);
//     }
// }

// 결정 요인 : 시간, 남은 이동 횟수, 위치
int go(int time, int pos, int remaining)
{
    if (INF != dp[time][remaining][pos])
    {
        // cout << time << ", " << remaining << ", " << pos << " : " << dp[time][remaining][pos] << '\n';

        return dp[time][remaining][pos];
    }

    if (t == time)
        return 0;

    int cnt = 0;

    if (pos == arr[time])
    {
        cnt++;
    }

    dp[time][remaining][pos] = cnt + go(time + 1, pos, remaining);

    if (remaining)
    {
        dp[time][remaining][pos] = max(dp[time][remaining][pos], cnt + go(time + 1, (pos + 1) % 2, remaining - 1));
    }

    return dp[time][remaining][pos];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    fill(&dp[0][0][0], &dp[0][0][0] + 1004 * 34 * 2, INF);

    cin >> t >> w;

    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];

        arr[i]--;
    }

    dp[t][0][0] = 0;
    dp[t][0][1] = 0;

    // go(0, 0, w, 0);
    //
    // cout << res;
 
    // cout << go(0, 0, w);
    
    cout << max(go(0, 0, w), go(0, 1, w - 1));

    return 0;
}