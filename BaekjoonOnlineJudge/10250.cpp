#include <bits/stdc++.h>

using namespace std;

int t;

int h, w, n;

int xx;
int yy;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> h >> w >> n;

        n--;

        xx = n / h + 1;
        yy = n % h + 1;

        cout << yy * 100 + xx << '\n';
    }


    return 0;
}
