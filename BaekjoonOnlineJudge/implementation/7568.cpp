#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;

int x;
int y;

vector<pair<int, int>> vec;
vector<int> resVec;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;

        vec.push_back({ x, y });
    }

    for (int i = 0; i < n; i++)
    {
        resVec.push_back(1);

        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            if (vec[i].first < vec[j].first && vec[i].second < vec[j].second)
            {
                resVec[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << resVec[i] << ' ';
    }

    return 0;
}
