#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

string strA;
string strB;

int res = 999'999'999;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> strA >> strB;

    for (int i = 0; i <= strB.size() - strA.size(); i++)
    {
        int cnt = 0;

        for (int j = 0; j < strA.size(); j++)
        {
            if (strA[j] != strB[i + j])
            {
                cnt++;
            }
        }

        res = min(res, cnt);
    }

    cout << res;

    return 0;
}
