#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int c;
int k;
int p;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> c >> k >> p;

    for (int i : views::iota(1, c + 1))
    {
        res += k * i + p * i * i;
    }

    println("{}", res);

    return 0;
}
