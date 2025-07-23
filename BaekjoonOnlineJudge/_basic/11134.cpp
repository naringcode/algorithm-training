#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int a;
int b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> a >> b;

        int res = a / b;

        if (a % b != 0)
        {
            res++;
        }

        println("{}", res);
    }

    return 0;
}
