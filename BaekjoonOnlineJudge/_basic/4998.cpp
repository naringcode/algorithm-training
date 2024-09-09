#include <bits/stdc++.h>

using namespace std;

double n;
double b;
double m;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (cin >> n)
    {
        cin >> b >> m;

        b *= 0.01;

        res = 0;

        while (n <= m)
        {
            n += (b * n);

            res++;
        }

        cout << res << '\n';
    }

    return 0;
}
