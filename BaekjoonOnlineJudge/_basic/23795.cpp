#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> n;

        if (n == -1)
            break;

        res += n;
    }

    println("{}", res);

    return 0;
}
