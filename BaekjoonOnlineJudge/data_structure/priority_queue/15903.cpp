#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

ll num;

priority_queue<ll, vector<ll>, greater<>> pq;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i : views::iota(0, n))
    {
        cin >> num;

        pq.push(num);
    }

    for (int i : views::iota(0, m))
    {
        ll v1 = pq.top();
        pq.pop();

        ll v2 = pq.top();
        pq.pop();

        pq.push(v1 + v2);
        pq.push(v1 + v2);
    }

    while (pq.size() > 0)
    {
        res += pq.top();
        pq.pop();
    }

    println("{}", res);

    return 0;
}
