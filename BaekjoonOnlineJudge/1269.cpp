#include <bits/stdc++.h>

using namespace std;

set<int> mySet;

int n;
int m;

int temp;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    res = n + m;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;

        mySet.insert(temp);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> temp;

        if (mySet.end() != mySet.find(temp))
        {
            res -= 2;
        }
    }

    cout << res;

    return 0;
}
