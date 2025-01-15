#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int t;
int c;
int p;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> t >> c >> p;

    if (n % t == 0)
    {
        n--;
    }

    n /= t;

    cout << (n * c * p);

    return 0;
}
