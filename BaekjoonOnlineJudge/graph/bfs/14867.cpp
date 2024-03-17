#include <bits/stdc++.h>

using namespace std;

int mx_liter_a;
int mx_liter_b;

int dest_a;
int dest_b;

map<int, int> visited[100'004];

int res = -1;

void go()
{
    queue<pair<int, int>> q;
    
    int a;
    int b;

    q.push({ 0, 0 });

    visited[0][0] = 1;

    int cnt = -1;

    while (q.size())
    {
        cnt++;

        int size = q.size();

        for (int i = 0; i < size; i++)
        {
            tie(a, b) = q.front();
            q.pop();

            if (a == dest_a && b == dest_b)
            {
                res = cnt;

                return;
            }

            // 채우기
            if (0 == visited[mx_liter_a][b])
            {
                visited[mx_liter_a][b] = 1;

                q.push({ mx_liter_a, b });
            }

            if (0 == visited[a][mx_liter_b])
            {
                visited[a][mx_liter_b] = 1;

                q.push({ a, mx_liter_b });
            }

            // 버리기
            if (0 == visited[0][b])
            {
                visited[0][b] = 1;

                q.push({ 0, b });
            }

            if (0 == visited[a][0])
            {
                visited[a][0] = 1;

                q.push({ a, 0 });
            }

            // 물 이동
            // a -> b
            int na;
            int nb;

            if (mx_liter_b - b >= a)
            {
                na = 0;
                nb = b + a;
            }
            else
            {
                na = a - (mx_liter_b - b);
                nb = mx_liter_b;
            }

            if (0 == visited[na][nb])
            {
                visited[na][nb] = 1;

                q.push({ na, nb });
            }

            if (0 == visited[0][b])
            {
                visited[0][b] = 1;

                q.push({ 0, b });
            }

            // b -> a
            if (mx_liter_a - a >= b)
            {
                na = a + b;
                nb = 0;
            }
            else
            {
                na = mx_liter_a;
                nb = b - (mx_liter_a - a);
            }

            if (0 == visited[na][nb])
            {
                visited[na][nb] = 1;

                q.push({ na, nb });
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> mx_liter_a >> mx_liter_b >> dest_a >> dest_b;

    go();

    cout << res;

    return 0;
}