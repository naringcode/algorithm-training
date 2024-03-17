#include <bits/stdc++.h>

using namespace std;

int n;
int c;

int arr[34];

vector<int> vecA;
vector<int> vecB;

int res;

void go(int idx, int len, vector<int>& vec, int sum)
{
    if (sum > c)
        return;

    if (idx == len)
    {
        vec.push_back(sum);

        return;
    }

    go(idx + 1, len, vec, sum);
    go(idx + 1, len, vec, sum + arr[idx]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> c;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    go(0, n / 2, vecA, 0);
    go(n / 2, n, vecB, 0);

    sort(vecA.begin(), vecA.end());
    sort(vecB.begin(), vecB.end());

    for (int val : vecA)
    {
        if (c - val >= 0)
        {
            res += int(upper_bound(vecB.begin(), vecB.end(), c - val) - vecB.begin());
        }
    }

    cout << res;

    return 0;
}
