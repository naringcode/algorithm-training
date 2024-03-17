#include <bits/stdc++.h>

using namespace std;

int t;
int n;
int m;

int x;
int y;

int boundary;

int tree[200'004];
int indices[200'004];

int sum(int idx)
{
    int ret = 0;

    while (idx > 0)
    {
        ret += tree[idx];
        idx -= (idx & -idx);
    }

    return ret;
}

void update(int idx, int amount)
{
    while (idx <= boundary)
    {
        tree[idx] += amount;
        idx += (idx & -idx);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n >> m;

        boundary = n + m;

        memset(tree, 0, sizeof(tree));

        for (int i = 1; i <= n; i++)
        {
            update(i + m, 1);
            indices[i] = m + i;
        }

        do
        {
            cin >> x;

            y = indices[x];
            cout << sum(y - 1) << ' ';

            update(y, -1); // 빼고
            update(m, 1); // 넣기

            indices[x] = m;

        } while (--m);

        cout << '\n';
    }

    return 0;
}
