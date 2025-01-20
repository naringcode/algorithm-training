#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;

ll resA;
ll resB;
ll resC;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (ll i = 1; i <= n; i++)
    {
        resA += i;
        resB += i;
        resC += i * i * i;
    }

    resB *= resB;

    cout << resA << "\n" << resB << "\n" << resC << "\n";

    return 0;
}
