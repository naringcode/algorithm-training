#include <iostream>
#include <queue>

using namespace std;

using ll = long long;

int a;
int k;

bool visited[1'000'004];

int res;

void go()
{
    queue<pair<int, int>> q;
    q.push({ a, 0 });

    while (q.size() > 0)
    {
        auto [pos, depth] = q.front();
        q.pop();

        if (pos == k)
        {
            res = depth;

            return;
        }

        if (pos + 1 <= 1'000'000 && visited[pos + 1] == false)
        {
            visited[pos] = true;

            q.push({ pos + 1, depth + 1 });
        }

        if (pos * 2 <= 1'000'000 && visited[pos * 2] == false)
        {
            visited[pos * 2] = true;

            q.push({ pos * 2, depth + 1 });
        }
    }
}

int main()
{
    cin >> a >> k;

    go();

    cout << res;

    return 0;
}
