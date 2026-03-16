#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;

int n;
int d;

int v;
int f;
int c;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;
    
    while (t--)
    {
        cin >> n >> d;

        res = 0;

        for (int i : views::iota(0, n))
        {
            cin >> v >> f >> c;

            if (d <= v * f / c)
            {
                res++;
            }
        }

        println("{}", res);
    }

    return 0;
}
