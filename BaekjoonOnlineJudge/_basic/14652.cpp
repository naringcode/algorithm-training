#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;
int k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> k;

    println("{} {}", k / m, k % m);

    return 0;
}
