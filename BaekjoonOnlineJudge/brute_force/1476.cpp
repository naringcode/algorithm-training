#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int e;
int s;
int m;

int cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> e >> s >> m;
    e--;
    s--;
    m--;

    int ee = 0;
    int ss = 0;
    int mm = 0;
    cnt = 1;

    while (true)
    {
        if (e == ee && s == ss && m == mm)
            break;

        ee = (ee + 1) % 15;
        ss = (ss + 1) % 28;
        mm = (mm + 1) % 19;

        cnt++;
    }

    cout << cnt;

    return 0;
}
