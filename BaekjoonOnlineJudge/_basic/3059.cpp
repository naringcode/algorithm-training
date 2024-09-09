#include <bits/stdc++.h>

using namespace std;

int n;

string str;

bool chkArr[26];
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        res = 0;

        memset(chkArr, 0, sizeof(chkArr));

        for (char ch : str)
        {
            chkArr[ch - 'A'] = true;
        }

        for (int idx = 0; idx < 26; idx++)
        {
            if (true == chkArr[idx])
                continue;

            res += idx + 65;
        }

        cout << res << '\n';
    }

    return 0;
}
