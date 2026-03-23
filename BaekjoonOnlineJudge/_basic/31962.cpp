#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int x;

int s;
int t;

int res = -1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> x;

    for (auto _ : views::iota(0, n))
    {
        cin >> s >> t;

        if (s + t <= x)
        {
            res = max(res, s);
        }
    }

    println("{}", res);

    return 0;
}
