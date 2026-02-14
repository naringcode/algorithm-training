#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

int mv[1004];
int dice[1004];

int curr;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i : views::iota(0, n))
    {
        cin >> mv[i];
    }

    for (int i : views::iota(0, m))
    {
        cin >> dice[i];
    }

    for (int i : views::iota(0, m))
    {
        res++;

        curr += dice[i];
        curr += mv[curr];

        if (curr >= n - 1)
            break;
    }

    println("{}", res);

    return 0;
}
