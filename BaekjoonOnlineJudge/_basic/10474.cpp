#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll a;
ll b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> a >> b;

        if (a == 0 && b == 0)
            break;

        println("{} {} / {}", a / b, a % b, b);
    }

    return 0;
}
