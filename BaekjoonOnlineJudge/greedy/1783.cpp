#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n; // 세로
ll m; // 가로

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    if (n == 1)
    {
        println("1");
    }
    else if (n == 2)
    {
        println("{}", min<ll>(4, (m + 1) / 2));
    }
    else if (m < 7)
    {
        println("{}", min<ll>(4, m));
    }
    else
    {
        println("{}", m - 2);
    }
    
    return 0;
}
