#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int deadline;
ll cnt;

vector<pair<int, ll>> vec;

priority_queue<ll> pq;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> deadline >> cnt;

        vec.push_back({ deadline, cnt });
    }

    sort(vec.begin(), vec.end(), greater());

    int idx = 0;

    for (int i = n; i > 0; i--)
    {
        while (idx < n && i <= vec[idx].first)
        {
            pq.push(vec[idx].second);

            idx++;
        }

        if (pq.size())
        {
            res += pq.top();

            pq.pop();
        }
    }

    cout << res;

    return 0;
}