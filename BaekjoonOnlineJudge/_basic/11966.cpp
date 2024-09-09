#include <bits/stdc++.h>

using namespace std;

long long n;
int cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < 32; i++)
    {
        if (n & 1)
        {
            cnt++;
        }

        n >>= 1;
    }

    if (1 == cnt)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }

    return 0;
}
