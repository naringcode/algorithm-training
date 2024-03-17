#include <bits/stdc++.h>

using namespace std;

int n;

int num[14];
int op[4];

int mx = -1'999'999'999;
int mn = 1'999'999'999;

int calc(int a, int b, int oper)
{
    if (0 == oper)
    {
        return a + b;
    }
    else if (1 == oper)
    {
        return a - b;
    }
    else if (2 == oper)
    {
        return a * b;
    }
    else
    {
        return a / b;
    }
}

void go(int idx, int accum)
{
    if (idx + 1 == n)
    {
        mx = max(mx, accum);
        mn = min(mn, accum);

        return;
    }

    for (int i = 0; i < 4; i++)
    {
        if (op[i])
        {
            op[i]--;

            go(idx + 1, calc(accum, num[idx + 1], i));

            op[i]++;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < 4; i++)
    {
        cin >> op[i];
    }

    go(0, num[0]);

    cout << mx << '\n' << mn;

    return 0;
}