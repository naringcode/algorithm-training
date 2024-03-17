#include <bits/stdc++.h>

using namespace std;

int n;

priority_queue<float> pq;

vector<float> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        float f;

        cin >> f;

        pq.push(f);

        if (8 == pq.size())
        {
            pq.pop();
        }
    }

    while (pq.size())
    {
        res.push_back(pq.top());

        pq.pop();
    }

    reverse(res.begin(), res.end());

    cout << fixed;
    cout.precision(3);

    for (int i = 0; i < 7; i++)
    {
        cout << res[i] << '\n';
    }

    return 0;
}