#include <bits/stdc++.h>

using namespace std;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 3; i++)
    {
        cin >> str;

        char prv = '-';
        int mx  = 1;
        int cnt = 0;

        for (char& ch : str)
        {
            if (prv == ch)
            {
                cnt++;
            }
            else
            {
                mx = max(mx, cnt);

                prv = ch;
                cnt = 1;
            }
        }
        
        mx = max(mx, cnt);

        cout << mx << '\n';
    }

    return 0;
}
