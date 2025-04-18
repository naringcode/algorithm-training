#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int n;

string strA;
string strB;

int diffA;
int diffB;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;
        cin >> strA >> strB;

        diffA = 0;
        diffB = 0;

        for (auto [chA, chB] : views::zip(strA, strB))
        {
            int diff = chA - chB;

            if (diff < 0)
            {
                diffA++;
            }
            else if (diff > 0)
            {
                diffB++;
            }
        }

        res = min(diffA, diffB);

        diffA -= res;
        diffB -= res;

        res += diffA;
        res += diffB;

        println("{}", res);
    }

    return 0;
}
