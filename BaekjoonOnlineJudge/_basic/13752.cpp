#include <bits/stdc++.h>

using namespace std;

int n;
int k;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    while (n--)
    {
        cin >> k;

        string str(k, '=');

        cout << str << '\n';
    }

    return 0;
}
