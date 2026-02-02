#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using ll = long long;

int n;

vector<pair<int, int>> vec;

int res;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int s;
        int p;
        cin >> s >> p;

        vec.push_back({ s, p });
    }

    sort(vec.begin(), vec.end(), [](pair<int, int>& lhs, pair<int, int>& rhs) {
        if (lhs.first == rhs.first)
            return lhs.second < rhs.second;

        return lhs.first > rhs.first;
    });

    for (int i = 5; i < vec.size(); i++)
    {
        if (vec[4].first == vec[i].first && vec[4].second < vec[i].second)
        {
            res++;

            continue;
        }

        break;
    }

    cout << res;

    return 0;
}
