#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int num;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int cnt : views::iota(1, n + 1))
    {
        cin >> num;

        if (num != cnt)
        {
            res++;
        }
    }

    println("{}", res);

    return 0;
}
