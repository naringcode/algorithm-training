#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int k;

int arrX[54];
int arrY[54];

vector<bool> indices;
int res = 999'999'999;

int dist(int idxA, int idxB)
{
    return abs(arrX[idxA] - arrX[idxB]) + abs(arrY[idxA] - arrY[idxB]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    for (int idx : views::iota(0, n))
    {
        cin >> arrX[idx] >> arrY[idx];
    }

    indices.resize(n);
    ranges::fill(indices, false);
    
    for (int idx = 0; idx < k; idx++)
    {
        indices[idx] = true;
    }

    // next_permutation()
    ranges::reverse(indices);

    do
    {
        vector<int> idxVec;

        for (int idx = 0; idx < n; idx++)
        {
            if (indices[idx] == true)
            {
                idxVec.push_back(idx);
            }
        }

        int mx = 0;

        for (int idx = 0; idx < n; idx++)
        {
            int mn = 999'999'999;

            // 모든 대피소의 최단거리 구하기
            for (int pos : idxVec)
            {
                mn = min(mn, dist(idx, pos));
            }

            mx = max(mx, mn);
        }

        res = min(res, mx);

    } while (next_permutation(indices.begin(), indices.end()));

    println("{}", res);
    
    return 0;
}
