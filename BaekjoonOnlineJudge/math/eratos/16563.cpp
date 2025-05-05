#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll eratos[5'000'004];

int n;
ll  k;

void go(int num)
{
    if (num == 1)
        return;

    int nxt = num / eratos[num];

    go(nxt);

    print("{} ", eratos[num]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (ll i = 2; i <= 5'000'000; i++)
    {
        if (eratos[i] == 0)
        {
            for (int j = i; j <= 5'000'000; j += i)
            {
                eratos[j] = i;
            }
        }
    }

    for (int i : views::iota(0, n))
    {
        cin >> k;

        go(k);

        println("");
    }

    return 0;
}
