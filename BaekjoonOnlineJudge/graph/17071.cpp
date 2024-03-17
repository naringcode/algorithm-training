#include <bits/stdc++.h>

using namespace std;

constexpr int MAX = 500'001;

int n;
int k;

int visited[2][MAX];
int step;

bool chk;

constexpr int conv_step(int step)
{
    return step % 2;
}

void bfs()
{
    // 로직을 수정해서 동일 위치에 대한 처리가 필요하다.
    if (n == k)
    {
        chk = true;

        return;
    }

    queue<int> q;

    visited[conv_step(step)][n] = 1;

    q.push(n);

    step++; // 초기 지점 방문 후 이동

    while (q.size())
    {
        k += step; // 걸을 게

        // cout << step << ' ' << k << '\n';
        // cout << "  " << visited[conv_step(step)][k] << '\n';
        
        if (k >= MAX)
            break;

        // n이 먼저 방문했던 적이 있음
        // n이 먼저 방문했던 지점에 k가 도착
        // 방문 처리를 true로 잡는 습관 때문에 헤맸다...
        // if (true == visited[conv_step(step)][k])
        if (visited[conv_step(step)][k])
        {
            chk = true;

            return;
        }

        // flood-fill
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            int here = q.front();
            q.pop();

            for (int there : { here - 1, here + 1, here * 2 })
            {
                if (there < 0 || there >= MAX)
                    continue;

                if (visited[conv_step(step)][there])
                    continue;

                if (there == k)
                {
                    chk = true;

                    return;
                }

                visited[conv_step(step)][there] = visited[conv_step(step + 1)][here] + 1;

                q.push(there);
            }
        }

        step++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    bfs();

    if (true == chk)
    {
        cout << step;
    }
    else
    {
        cout << -1;
    }

    return 0;
}
