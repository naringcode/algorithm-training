#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

int x;
int y;

ll arr[100'004];
ll psum[100'004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int idx : views::iota(0, n))
    {
        cin >> arr[idx + 1];
    }

    for (int idx : views::iota(1, n + 1))
    {
        psum[idx] = psum[idx - 1] + arr[idx];
    }

    cin >> m;

    for (int i : views::iota(0, m))
    {
        cin >> x >> y;

        println("{}", psum[y] - psum[x - 1]);
    }

    return 0;
}
