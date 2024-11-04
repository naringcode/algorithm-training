#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

vector<pair<int, int>> vec;
vector<int> rankVec;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 8; i++)
    {
        int num;
        cin >> num;

        vec.push_back({ num, i + 1 });
    }

    sort(vec.begin(), vec.end(), [](const pair<int, int>& lhs, const pair<int, int>& rhs)
    {
        return lhs.first > rhs.first;
    });
    
    //
    int res = 0;

    for (int i = 0; i < 5; i++)
    {
        res += vec[i].first;

        rankVec.push_back(vec[i].second);
    }

    sort(rankVec.begin(), rankVec.end());

    cout << res << '\n';

    for (int i = 0; i < 5; i++)
    {
        cout << rankVec[i] << ' ';
    }

    return 0;
}
