#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a;
int t;
int chk; // 0 : 뻔, 1 : 데기

int aCnt; // 뻔
int bCnt; // 데기

int totalCnt;
int loopCnt;
int res = 1;

void go()
{
    while (true)
    {
        aCnt++;
        totalCnt++;
        if (chk == 0 && aCnt == t)
            return;

        bCnt++;
        totalCnt++;
        if (chk == 1 && bCnt == t)
            return;

        aCnt++;
        totalCnt++;
        if (chk == 0 && aCnt == t)
            return;

        bCnt++;
        totalCnt++;
        if (chk == 1 && bCnt == t)
            return;

        for (int i : views::iota(0, loopCnt + 2))
        {
            aCnt++;
            totalCnt++;
            if (chk == 0 && aCnt == t)
                return;
        }

        for (int i : views::iota(0, loopCnt + 2))
        {
            bCnt++;
            totalCnt++;
            if (chk == 1 && bCnt == t)
                return;
        }

        loopCnt++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> t >> chk;

    go();

    println("{}", (totalCnt - 1) % a);

    return 0;
}
