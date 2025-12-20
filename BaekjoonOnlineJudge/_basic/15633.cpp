#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    res += n;

    for (int i : views::iota(1, n))
    {
        if (n % i == 0)
        {
            res += i;
        }
    }

    println("{}", res * 5 - 24);

    return 0;
}
