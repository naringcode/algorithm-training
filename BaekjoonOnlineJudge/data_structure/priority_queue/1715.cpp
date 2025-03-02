#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

priority_queue<ll, vector<ll>, greater<ll>> pq;

int n;
ll  res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        ll temp;
        cin >> temp;

        pq.push(temp);
    }

    while (pq.size() >= 2)
    {
        ll temp = pq.top();
        pq.pop();

        temp += pq.top();
        pq.pop();

        pq.push(temp);

        res += temp;
    }

    println("{}", res);

    return 0;
}
