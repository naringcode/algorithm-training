#include <bits/stdc++.h>

using namespace std;

int n;
int m;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    while (n--)
    {
        cin >> str;

        reverse(str.begin(), str.end());

        cout << str << '\n';
    }

    return 0;
}
