#include <bits/stdc++.h>

using namespace std;

int l;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> l;

    res = l / 5;
    if (0 != l % 5)
    {
        res++;
    }

    cout << res;

    return 0;
}
