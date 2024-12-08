#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int aCnt = 1;
int bCnt = 0;

string str = "A";

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        int tempACnt = bCnt;
        int tempBCnt = bCnt + aCnt;

        aCnt = tempACnt;
        bCnt = tempBCnt;
    }

    cout << aCnt << ' ' << bCnt;

    return 0;
}
