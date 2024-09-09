#include <bits/stdc++.h>

using namespace std;

int n;
int w;
int h;
int l;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> w >> h >> l;

    cout << min(n, (w / l) * (h / l));

    return 0;
}
