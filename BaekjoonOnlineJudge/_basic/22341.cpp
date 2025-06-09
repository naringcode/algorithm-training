#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int c;

int w;
int h;

int x;
int y;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> c;

    w = n;
    h = n;

    while (c--)
    {
        cin >> x >> y;

        if (x >= w || y >= h)
            continue;

        int tempA = x * h;
        int tempB = y * w;

        if (tempA >= tempB)
        {
            w = x;
        }
        else
        {
            h = y;
        }
    }

    println("{}", w * h);

    return 0;
}
