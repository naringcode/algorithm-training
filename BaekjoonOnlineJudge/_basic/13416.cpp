#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int n;

int a;
int b;
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
        cin >> n;

        res = 0;

        while (n--)
        {
            cin >> a >> b >> c;

            int temp = max(max(a, b), c);
            res += max(temp, 0);
        }

        println("{}", res);
    }

    return 0;
}
