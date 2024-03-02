#include <bits/stdc++.h>

using namespace std;

int n;
int a;
int b;
int c;
int d;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> a >> b >> c >> d;

    res = min(b * ((n / a) + (0 != n % a ? 1 : 0)), 
              d * ((n / c) + (0 != n % c ? 1 : 0)));

    cout << res;

    return 0;
}
