#include <bits/stdc++.h>

using namespace std;

int n;
int m;

string a;
string b;

vector<int> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;
    cin >> a >> b;

    vec.resize(n + m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vec[(n + m - 1) - i - j] += (a[n - 1 - i] - '0') * (b[m - 1 - j] - '0');
        }
    }

    for (int i = n + m - 1; i > 0; i--)
    {
        vec[i - 1] += vec[i] / 10;
        vec[i] %= 10;
    }

    int idx = 0;

    while (idx != n + m && vec[idx] == 0)
    {
        idx++;
    }

    if (idx == n + m)
    {
        cout << 0;
    }
    else
    {
        while (idx != n + m)
        {
            cout << vec[idx];

            idx++;
        }
    }

    return 0;
}
