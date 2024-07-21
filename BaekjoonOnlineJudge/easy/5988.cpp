#include <bits/stdc++.h>

using namespace std;

int n;
string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> str;

        if (0 == (str.back() - '0') % 2)
        {
            cout << "even\n";
        }
        else
        {
            cout << "odd\n";
        }
    }

    return 0;
}
