#include <bits/stdc++.h>

using namespace std;

int n;

vector<pair<int, int>> vec;
vector<int> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;

        cin >> a;

        vec.push_back({ a, i });
        res.push_back(a);
    }

    sort(vec.begin(), vec.end());

    for (int idx = 0; idx < vec.size(); idx++)
    {
        res[vec[idx].second] = idx;
    }

    for (auto& elem : res)
    {
        cout << elem << ' ';
    }
    
    return 0;
}
