#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

ll temp;
ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> temp;

        res = max(res, temp);
    }

    println("{}", res);

    return 0;
}
