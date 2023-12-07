#include <bits/stdc++.h>

using namespace std;

int t;

string str;
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> str;

        str.erase(str.begin() + (n - 1));

        cout << str << '\n';
    }

    return 0;
}
