#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int arr[1004];
bool visited[1004];

int go()
{
    queue<pair<int, int>> q;
    q.push({ 0, 0 });

    visited[0] = true;

    while (q.size() > 0)
    {
        auto [curr, cnt] = q.front();
        q.pop();
        
        if (curr == n - 1)
            return cnt;

        for (int idx : views::iota(1, arr[curr] + 1)
                       | views::transform([=](int elem) { return elem + curr; })
                       | views::filter([=](int elem) { return !visited[elem]; }))
        {
            q.push({ idx, cnt + 1 });
            
            visited[idx] = true;
        }
    }

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int idx : views::iota(0, n))
    {
        cin >> arr[idx];
    }

    println("{}", go());

    return 0;
}
