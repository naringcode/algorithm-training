#include <bits/stdc++.h>

using namespace std;

int t;
int n;

int    mx;
string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        cin >> res >> mx;

        for (int i = 1; i < n; i++)
        {
            string str;
            int    num;

            cin >> str >> num;

            if (mx < num)
            {
                mx  = num;
                res = str;
            }
        }

        cout << res << '\n';
    }

    return 0;
}
