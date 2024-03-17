#include <bits/stdc++.h>

using namespace std;

int n;

int a;
int b;

vector<pair<int, int>> vec;
int lis[100'004];

int len;

stack<pair<int, int>> stkIndices;
stack<int> stkRes;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        vec.push_back({ a, b });
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < n; i++)
    {
        int* lower = lower_bound(lis, lis + len, vec[i].second);

        if (0 == *lower)
        {
            len++;
        }

        *lower = vec[i].second;

        stkIndices.push({ lower - lis, vec[i].first });
    }

    len--;

    while (stkIndices.size())
    {
        auto pair = stkIndices.top();

        stkIndices.pop();

        if (len == pair.first)
        {
            stkRes.push(pair.second);

            len--;
        }
    }

    cout << n - stkRes.size() << '\n';

    for (int i = 0; i < n; i++)
    {
        if (stkRes.size() && vec[i].first == stkRes.top())
        {
            stkRes.pop();
        }
        else
        {
            cout << vec[i].first << '\n'; // 삭제해야 하는 전깃줄
        }
    }
 
    return 0;
}