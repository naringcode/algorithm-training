#include <bits/stdc++.h>

using namespace std;

int n;

vector<pair<int, int>> vec;
vector<bool> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int dist;
        int cost;

        cin >> dist >> cost;

        vec.push_back({ dist, cost });
        res.push_back(true);
    }
    
    for (int idxA = 0; idxA < n; idxA++) // x
    {
        auto& [distA, costA] = vec[idxA]; // x

        for (int idxB = 0; idxB < n; idxB++) // comp
        {
            if (idxA == idxB)
                continue;

            auto& [distB, costB] = vec[idxB]; // comp

            bool condA = (distA >= distB && costA >= costB);
            bool condB = (costA >= costB && distA >= distB);

            if (condA || condB)
            {
                res[idxA] = false;

                break;
            }
        }
    }

    cout << count(res.begin(), res.end(), true);

    return 0;
}
