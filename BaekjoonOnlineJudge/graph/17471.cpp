#include <bits/stdc++.h>

using namespace std;

// 그래프로 내꺼 네꺼?

// 두 개의 선거구로 나누고, 선거구에 포함된 구역은 모두 연결되어 있어야 한다.
// 선거구를 둘로 나눠서 인구 차이를 최소화
//
// 조합으로 모든 경우의 수 분석?
// 연결되어 있나 확인

constexpr int INF = 999'999'999;

int n;
int num[14];

vector<int> adj[14];
bool visited[2][14];

int a;
int b;

int res = INF;

int dfs(int here, int my)
{
    int ret = 1;

    visited[my][here] = true;

    for (int there : adj[here])
    {
        if (visited[my][there])
            continue;

        ret += dfs(there, my);
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> a;

        for (int j = 0; j < a; j++)
        {
            cin >> b;

            adj[i].push_back(b - 1);
        }
    }

    for (int i = 0; i < (1 << n); i++)
    {
        fill(&visited[0][0], &visited[0][0] + 2 * 14, true);

        int aBegin = -1;
        int aCnt = 0;
        int aSum = 0;
        a = i;
        for (int j = 0; j < n; j++)
        {
            if (a & (1 << j))
            {
                visited[0][j] = false;

                aCnt++;
                aSum += num[j];

                aBegin = j;
            }
        }

        if (-1 == aBegin)
            continue;

        if (aCnt != dfs(aBegin, 0))
            continue;

        int bBegin = -1;
        int bCnt = 0;
        int bSum = 0;
        b = ~i;
        for (int j = 0; j < n; j++)
        {
            if (b & (1 << j))
            {
                visited[1][j] = false;

                bCnt++;
                bSum += num[j];

                bBegin = j;
            }
        }
        
        if (-1 == bBegin)
            continue;

        if (bCnt != dfs(bBegin, 1))
            continue;

        res = min(res, abs(aSum - bSum));
    }

    if (INF == res)
    {
        cout << -1;
    }
    else
    {
        cout << res;
    }

    return 0;
}