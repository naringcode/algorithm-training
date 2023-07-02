#include <bits/stdc++.h>

using namespace std;

int psum[100'004];

int n;
int m;

int a, b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> a;

        psum[i] = a + psum[i - 1];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;

        cout << psum[b] - psum[a - 1] << '\n';
    }

    return 0;
}
