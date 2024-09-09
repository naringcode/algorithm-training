#include <bits/stdc++.h>

using namespace std;

int n;

int a;
int b;
int c;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> a >> b >> c;

        a -= b;

        if (a < 0)
        {
            res += -a * c;
        }
    }

    cout << res;

    return 0;
}
