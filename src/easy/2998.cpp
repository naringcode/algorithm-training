#include <bits/stdc++.h>

using namespace std;

string str;
string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;
    reverse(str.begin(), str.end());

    int cnt = 0;
    int sum = 0;
    for (char ch : str)
    {
        sum += (ch - '0') * (1 << cnt);
        cnt++;

        if (3 == cnt)
        {
            res.push_back(sum + '0');
            sum = 0;
            cnt = 0;
        }
    }

    if (0 != cnt)
    {
        res.push_back(sum + '0');
    }

    reverse(res.begin(), res.end());

    cout << res;

    return 0;
}
