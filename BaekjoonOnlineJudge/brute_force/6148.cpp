#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int b;

int heights[24];

int res = 999'999'999;

void go(int idx, int totalH)
{
    if (totalH >= b)
    {
        res = min(res, totalH - b);

        return;
    }

    if (idx == n)
        return;

    go(idx + 1, totalH);
    go(idx + 1, totalH + heights[idx]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> b;

    for (int idx : views::iota(0, n))
    {
        cin >> heights[idx];
    }

    go(0, 0);

    println("{}", res);

    return 0;
}
