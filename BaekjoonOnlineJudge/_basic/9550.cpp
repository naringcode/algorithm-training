#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int n;
int k;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n >> k;

        int res = 0;

        for (int i : views::iota(0, n))
        {
            int temp;
            cin >> temp;

            res += temp / k;
        }

        println("{}", res);
    }

    return 0;
}
