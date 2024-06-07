#include <bits/stdc++.h>

using namespace std;

int n;

string strA;
string strB;

char arrA[30];
char arrB[30];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    cin.ignore();

    for (int cnt = 0; cnt < n; cnt++)
    {
        memset(arrA, 0x00, sizeof(arrA));
        memset(arrB, 0x00, sizeof(arrB));

        res = 0;

        getline(cin, strA);
        getline(cin, strB);

        for (char ch : strA)
        {
            arrA[ch - 'a']++;
        }

        for (char ch : strB)
        {
            arrB[ch - 'a']++;
        }

        for (int idx = 0; idx < 30; idx++)
        {
            if (arrA[idx] == arrB[idx])
                continue;

            res += max(arrA[idx], arrB[idx]);
            res -= min(arrA[idx], arrB[idx]);
            // res += abs(arrA[idx] - arrB[idx]);
        }

        cout << "Case #" << cnt + 1 << ": " << res << '\n';
    }

    return 0;
}
