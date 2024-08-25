#include <bits/stdc++.h>

using namespace std;

int n;
int t;

int num;

int accum;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> t;

    while (n--)
    {
        cin >> num;

        accum += num;

        if (accum <= t)
        {
            res++;
        }
    }

    cout << res;

    return 0;
}
