#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;

priority_queue<double, vector<double>, greater<double>> pq;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n;

    while (n--)
    {
        double temp;
        cin >> temp;

        pq.push(temp);
    }

    while (pq.size() > 1)
    {
        double temp = pq.top();
        pq.pop();

        temp = (temp + pq.top()) / 2.0;
        pq.pop();

        pq.push(temp);
    }

    cin.precision(6);
    cout << fixed << pq.top();

    return 0;
}
