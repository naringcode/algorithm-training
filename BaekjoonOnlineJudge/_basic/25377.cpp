#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int res = 999'999'999;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        int a;
        int b;

        cin >> a >> b;

        if (a <= b)
        {
            res = min(b, res);
        }
    }

    if (res == 999'999'999)
    {
        cout << -1;
    }
    else
    {
        cout << res;
    }
    
    return 0;
}
