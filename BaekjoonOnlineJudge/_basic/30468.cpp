#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int s;
int d;
int i;
int l;

int n;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> s >> d >> i >> l >> n;

    int sum = s + d + i + l;
    n *= 4;

    res = max(0, n - sum);

    println("{}", res);

    return 0;
}
