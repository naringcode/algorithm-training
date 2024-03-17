#include <bits/stdc++.h>

using namespace std;

int n;

int d;
int p;

vector<pair<int, int>> vec;

priority_queue<int> pq;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> p >> d;

        vec.push_back({ d, p });
    }

    sort(vec.begin(), vec.end(), greater());

    int idx = 0;

    for (int i = 10000; i > 0; i--)
    {
        while (idx < vec.size() && i <= vec[idx].first)
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