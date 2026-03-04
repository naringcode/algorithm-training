#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;

int n;
int m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n >> m;

        if (n < 12 || m < 4)
        {
            println("-1");
        }
        else
        {
            println("{}", 11 * m + 4);
        }
    }
    
    return 0;
}
