#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int q;
ll  a;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> q;

    while (q--)
    {
        cin >> a;

        if ((a & (-a)) == a)
        {
            println("1");
        }
        else
        {
            println("0");
        }
    }

    return 0;
}
