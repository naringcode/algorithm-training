#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector<int> vec;

int a;
int b;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i : views::iota(1, 1000 + 1))
    {
        for (int j : views::iota(1, i + 1))
        {
            vec.push_back(i);
        }
    }

    cin >> a >> b;

    auto v = views::iota(a - 1, b) | views::transform([](int idx) { return vec[idx]; });
    res = accumulate(v.begin(), v.end(), 0);

    println("{}", res);

    return 0;
}
