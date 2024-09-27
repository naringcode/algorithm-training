#include <bits/stdc++.h>

using namespace std;

int n;
int k;

queue<int> q;
vector<int> res;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        q.push(i + 1);
    }

    while (q.size() > 0)
    {
        int elem = -1;

        for (int i = 0; i < k - 1; i++)
        {
            elem = q.front();
            q.pop();

            q.push(elem);
        }

        elem = q.front();
        q.pop();

        res.push_back(elem);
    }

    cout << "<";

    for (int i = 0; i < res.size() - 1; i++)
    {
        cout << res[i] << ", ";
    }

    cout << res.back();

    cout << ">";

    return 0;
}
