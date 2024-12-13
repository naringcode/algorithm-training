#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int num;

int ascCnt;
int ascNum = std::numeric_limits<int>::min();

int decCnt;
int decNum = std::numeric_limits<int>::max();

int resDec = 0;
int resAsc = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> num;

        if (num >= ascNum)
        {
            ascNum = num;

            ascCnt++;
            resAsc = max(resAsc, ascCnt);
        }
        else
        {
            ascNum = num;
            ascCnt = 1;
        }

        if (num <= decNum)
        {
            decNum = num;

            decCnt++;
            resDec = max(resDec, decCnt);
        }
        else
        {
            decNum = num;
            decCnt = 1;
        }
    }

    cout << max(resDec, resAsc);

    return 0;
}
