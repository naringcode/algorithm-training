#include <bits/stdc++.h>

using namespace std;

int n;
int m;
int k;

vector<int> pattern;

int curr;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> n >> m >> k;

        if (0 == n && 0 == m && 0 == k)
            break;

        pattern.clear();

        for (int i = 0; i < k; i++)
        {
            cin >> curr;

            pattern.push_back(curr);
        }

        curr = n;
        res  = n;

        for (int i = 0; i < m - 1; i++)
        {
            curr += pattern[i % k];
            res  += curr;
        }

        cout << res << '\n';
    }

    return 0;
}
