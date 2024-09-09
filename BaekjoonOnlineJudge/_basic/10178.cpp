#include <bits/stdc++.h>

using namespace std;

int t;

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
        cin >> a >> b;

        cout << "You get " << a / b << " piece(s) and your dad gets " << a % b << " piece(s).\n";
    }

    return 0;
}
