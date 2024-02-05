#include <bits/stdc++.h>

using namespace std;

int n;
string str;
string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> str;

        res.clear();
        res.push_back(str[0]);

        for (char ch : str)
        {
            if (ch != res.back())
            {
                res.push_back(ch);
            }
        }

        cout << res << '\n';
    }

    return 0;
}
