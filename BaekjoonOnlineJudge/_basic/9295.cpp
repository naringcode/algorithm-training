#include <bits/stdc++.h>

using namespace std;

int n;

int a;
int b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;

        cout << "Case " << i << ": " << a + b << '\n';
    }

    return 0;
}
