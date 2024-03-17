#include <bits/stdc++.h>

using namespace std;

int n;

int diagRT[34];
int diagLT[34];
int vert[20];

int cnt;

int res;

void go(int y)
{
    if (n == cnt)
    {
        res++;

        return;
    }

    if (n == y)
        return;

    for (int x = 0; x < n; x++)
    {
        // 퀸을 놓을 수 있음
        if (0 == diagRT[y + x] && 0 == diagLT[x - y + n] && 0 == vert[x])
        {
            // 퀸 놓기
            cnt++;

            diagRT[y + x] = 1;
            diagLT[x - y + n] = 1;
            vert[x] = 1;

            go(y + 1);

            // 퀸 빼기
            diagRT[y + x] = 0;
            diagLT[x - y + n] = 0;
            vert[x] = 0;

            cnt--;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    go(0);

    cout << res;

    return 0;
}