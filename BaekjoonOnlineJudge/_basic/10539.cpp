#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

ll sum;
ll res[104];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i : views::iota(0, n))
    {
        ll temp;
        cin >> temp;

        res[i] = temp * (i + 1);
        res[i] -= sum;

        sum += res[i];
    }

    for (int i : views::iota(0, n))
    {
        print("{} ", res[i]);
    }
    
    return 0;
}
