#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

priority_queue<ll, vector<ll>, greater<ll>> pq;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n * n; i++)
    {
        ll temp;
        cin >> temp;

        pq.push(temp);

        if (pq.size() > n)
        {
            pq.pop();
        }
    }

    cout << pq.top();

    return 0;
}
