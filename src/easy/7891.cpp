#include <bits/stdc++.h>

using namespace std;

int n;

long long a;
long long b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        cout << a + b << '\n';
    }

    return 0;
}