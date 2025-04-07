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

    for (int i : views::iota(0, n))
    {
        int temp;
        cin >> temp;

        vec.push_back(temp);
    }

    ranges::sort(vec);

    do
    {
        int temp = 0;

        for (auto [idx1, idx2] : views::zip(views::iota(0, n), views::iota(1, n)))
        {
            temp += abs(vec[idx1] - vec[idx2]);
        }

        res = max(temp, res);
    } while (next_permutation(vec.begin(), vec.end()));
    
    println("{}", res);

    return 0;
}
