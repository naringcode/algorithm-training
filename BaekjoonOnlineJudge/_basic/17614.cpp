#include <bits/stdc++.h>

using namespace std;

int n;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        string str = to_string(i);

        res += count(str.begin(), str.end(), '3');
        res += count(str.begin(), str.end(), '6');
        res += count(str.begin(), str.end(), '9');
    }

    cout << res;

    return 0;
}
