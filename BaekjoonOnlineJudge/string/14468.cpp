#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;
vector<vector<int>> pairPosVec;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    pairPosVec.resize(26);

    for (int idx : views::iota(0, ssize(str)))
    {
        int chIdx = str[idx] - 'A';

        pairPosVec[chIdx].push_back(idx);
        ranges::sort(pairPosVec[chIdx]);
    }

    for (const auto& [pairA, pairB] : views::cartesian_product(pairPosVec, pairPosVec))
    {
        if (pairA[0] < pairB[0] && pairA[1] < pairB[1] && pairA[1] > pairB[0])
        {
            res++;
        }
    }

    println("{}", res);

    return 0;
}
