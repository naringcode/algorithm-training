#include <bits/stdc++.h>

using namespace std;

int t;

int s;
int n;

int q;
int p;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> s;

        cin >> n;

        while (n--)
        {
            cin >> q >> p;

            s += q * p;
        }

        cout << s << '\n';
    }

    return 0;
}
