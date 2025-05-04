#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

ll arr[100'004];
ll psum[100'004];

ll curr;
ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int idx : views::iota(0, n - 1))
    {
        cin >> arr[idx];
    }

    for (int idx : views::iota(0, n - 1))
    {
        psum[idx + 1] = psum[idx] + arr[idx];
    }

    for (int i : views::iota(0, m))
    {
        ll temp;
        cin >> temp;

        res += abs(psum[temp + curr] - psum[curr]);

        curr += temp;
    }

    println("{}", res % 100'000);

    return 0;
}
