#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;
ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n;

    for (int num : views::iota(1, n + 1))
    {
        // 약수의 개수를 누적
        res += num * (n / num);
    }

    println("{}", res);

    return 0;
}
