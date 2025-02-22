#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
vector<int> vec;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end(), greater{ });

    for (int i = 0; i <= n; i++)
    {
        res = max(res, vec[i] + i);
    }

    cout << res + 2;

    return 0;
}