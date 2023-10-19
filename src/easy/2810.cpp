#include <bits/stdc++.h>

using namespace std;

int n;
string str;

bool chkLL = false;
int  cnt = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> str;

    for (int idx = 0; idx < str.length(); )
    {
        cnt++;

        if ('S' == str[idx])
        {
            idx += 1;
        }
        else if ('L' == str[idx])
        {
            chkLL = true;

            idx += 2;
        }
    }

    if (false == chkLL)
    {
        cout << cnt - 1;
    }
    else
    {
        cout << cnt;
    }

    return 0;
}
