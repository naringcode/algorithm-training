#include <bits/stdc++.h>

using namespace std;

int n;
int num;

int accum;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if (0 == num)
        {
            accum = 0;
        }
        else
        {
            accum++;
        }

        res += accum;
    }

    cout << res;

    return 0;
}
