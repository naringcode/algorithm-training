#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (auto _ : views::iota(0, n))
    {
        string temp;
        cin >> temp;

        int cnt = ranges::count(temp, 'O');
        if (cnt > m / 2)
        {
            res++;
        }
    }

    println("{}", res);

    return 0;
}
