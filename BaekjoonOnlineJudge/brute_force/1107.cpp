#include <bits/stdc++.h>

using namespace std;

int n;
int m;

bool enabled[10];

constexpr int DEFAULT_CHN = 100;

int res;

int go(int num, int depth, int zeros)
{
    if (depth == 7)
        return 999'999'999;

    int ret = 999'999'999;

    num *= 10;

    for (int i = 0; i < 10; i++)
    {
        if (false == enabled[i])
            continue;

        num += i;

        if (0 == num)
        {
            zeros++;
        }
        else
        {
            // 현재 번호에서 최소 이동
            ret = min(ret, abs(n - num) + (depth + 1) - zeros);
        }

        // 다음 번호에서 최소 이동
        ret = min(ret, go(num, depth + 1, zeros)); // 실질적인 계산은 위에서 한다

        if (0 == num)
        {
            zeros--;
        }

        num -= i;
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    fill(enabled, enabled + 10, true);

    for (int i = 0; i < m; i++)
    {
        int temp;

        cin >> temp;

        enabled[temp] = false;
    }

    if (10 != m) // 하나라도 살아 있는 버튼이 있으면
    {   
        res = abs(n - DEFAULT_CHN);

        if (true == enabled[0]) // 0 버튼 한 번만 누르고 +-하는 상황
        {
            res = min(res, n + 1);
        }

        // 완탐으로 가보자
        res = min(res, go(0, 0, 0));
    }
    else // 모든 버튼 비활성화
    {
        res = abs(n - DEFAULT_CHN);
    }

    cout << res;

    return 0;
}
