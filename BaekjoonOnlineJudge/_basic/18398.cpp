#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int n;

int a;
int b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        while (n--)
        {
            cin >> a >> b;

            println("{} {}", a + b, a * b);
        }
    }

    return 0;
}
