#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int n;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        for (int i : views::iota(0, n + 1))
        {
            if (i + i * i <= n)
            {
                res = i;
            }
            else
            {

                break;
            }
        }

        println("{}", res);
    }

    return 0;
}
