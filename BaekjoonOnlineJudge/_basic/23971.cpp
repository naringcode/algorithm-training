#include <bits/stdc++.h>

using namespace std;

int h;
int w;
int n;
int m;

int temp;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> h >> w >> n >> m;

    for (int i = 1; i <= w; i += m + 1)
    {
        temp++;
    }

    for (int i = 1; i <= h; i += n + 1)
    {
        res += temp;
    }

    cout << res;

    return 0;
}
