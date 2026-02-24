#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int k;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> k;

        res = 1;

        for (int i : views::iota(1, k))
        {
            res = res * 2 + 1;
        }

        println("{}", res);
    }
    
    return 0;
}
