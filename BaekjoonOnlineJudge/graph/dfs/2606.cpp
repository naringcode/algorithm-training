#include <bits/stdc++.h>

using namespace std;

int n;

bool visited[104];
bool arr[104][104];

int t;

int from;
int to;

int go(int from)
{
    int ret = 1;

    visited[from] = true;

    for (int i = 1; i <= n; i++)
    {
        if (true == visited[i])
            continue;

        if (arr[from][i])
        {
            ret += go(i);
        }
    }

    return ret;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> t;

    while (t--)
    {
        cin >> from >> to;

        arr[from][to] = true;
        arr[to][from] = true;
    }

    // 시작 컴은 제외
    cout << go(1) - 1;

    return 0;
}
