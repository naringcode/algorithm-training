#include <bits/stdc++.h>

using namespace std;

using ll = long long;

double t;
double a;
double b;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> a >> b;

        res = ceil(a / b * a / b); 

        println("{}", res);
    }

    return 0;
}
