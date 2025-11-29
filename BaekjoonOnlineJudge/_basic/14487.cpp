#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int dist[50004];

int sum;
int res = 999'999'999;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i : views::iota(0, n))
    {
        cin >> dist[i];

        sum += dist[i];
    }

    for (int i : views::iota(0, n))
    {
        res = min(res, sum - dist[i]);
    }

    println("{}", res);

    return 0;
}
