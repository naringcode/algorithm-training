#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

vector<pair<int, int>> vec;
queue<int> q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i : views::iota(1, m + 1))
    {
        int h1;
        int h2;

        cin >> h1 >> h2;

        vec.push_back({ h1, i });
        vec.push_back({ h2, i });
    }

    ranges::sort(vec);

    for (auto [_, id] : vec)
    {
        q.push(id);
    }

    for (int i : views::iota(0, n - 1))
    {
        int num = q.front();
        q.pop();

        q.push(num);
    }

    println("{}", q.front());
    
    return 0;
}
