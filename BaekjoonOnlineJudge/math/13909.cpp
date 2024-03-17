#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    // 계산해보면 제곱근이 결과가 됨
    cout << ll(sqrt(n));

    return 0;
}
