#include <bits/stdc++.h>

using namespace std;

int n;
int m;

string str;
int mx;

string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    str = to_string(n);
    mx  = min(n, (int)(m / str.length()));

    for (int i = 0; i < mx; i++)
    {
        res += to_string(n);
    }

    if (mx == (int)(m / str.length()))
    {
        for (int i = 0; i < m % str.length(); i++)
        {
            res.push_back(str[i]);
        }
    }

    cout << res;

    return 0;
}
