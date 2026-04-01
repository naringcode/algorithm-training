#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

map<int, int> mp[3];
int arr[204][3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i : views::iota(0, n))
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];

        mp[0][arr[i][0]]++;
        mp[1][arr[i][1]]++;
        mp[2][arr[i][2]]++;
    }

    for (int i : views::iota(0, n))
    {
        int res = 0;

        for (int j : views::iota(0, 3))
        {
            if (mp[j][arr[i][j]] == 1)
            {
                res += arr[i][j];
            }
        }

        println("{}", res);
    }

    return 0;
}
