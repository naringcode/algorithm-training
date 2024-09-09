#include <bits/stdc++.h>

using namespace std;

int n;

int a;
int b;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> a >> b;

        cout << (a * b) / 2 << '\n';
    }

    return 0;
}