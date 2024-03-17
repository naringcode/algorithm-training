#include <bits/stdc++.h>

using namespace std;

int t;
int n;
int m;

queue<pair<int, int>> q;
priority_queue<int> pq;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;

        for (int j = 0; j < n; j++)
        {
            pair<int, int> pair;

            cin >> pair.first;

            pair.second = j;

            q.push(pair);
            pq.push(pair.first);
        }

        int cnt = 1;

        while (q.size())
        {
            while (q.front().first != pq.top())
            {
                auto fr = q.front();

                q.push(fr);

                q.pop();
            }

            auto fr = q.front();

            if (fr.second == m)
            {
                cout << cnt << '\n';

                break;
            }

            q.pop();
            pq.pop();

            cnt++;
        }

        while(pq.size())
        {
            pq.pop(); // priority_queue에는 clear()가 없어
            q.pop();  // queue에도 clear()가 없어
        }
    }

    return 0;
}
