#include <bits/stdc++.h>

using namespace std;

int x;
int n;
int a;
int b;

int accum;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> x >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        accum += a * b;
    }

    cout << ((x == accum) ? "Yes" : "No");

    return 0;
}
