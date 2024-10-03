#include <bits/stdc++.h>

using namespace std;

int n;
int m;

priority_queue<int> pq;
vector<int> vec;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        pq.push(temp);
    }

    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;

        vec.push_back(temp);
    }

    int idx;
    for (idx = 0; idx < vec.size(); idx++)
    {
        if (0 == pq.size())
            break;

        int valA = pq.top();
        int valB = vec[idx];

        valA -= valB;

        if (valA < 0)
            break;

        pq.pop();

        if (valA > 0)
        {
            pq.push(valA);
        }
    }

    if (idx == vec.size())
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}
