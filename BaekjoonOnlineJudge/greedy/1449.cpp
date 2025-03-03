#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

vector<int> vec;

int n;
int l;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> l;
    vec.resize(n);
    ranges::for_each(vec, [](int& elem) { cin >> elem; });
    ranges::sort(vec);

    int prv = vec.front();
    res = 1;

    ranges::for_each(vec.begin() + 1, vec.end(), [&](int elem)
    {
        if (l <= elem - prv)
        {
            prv = elem;

            res++;
        }
    });

    println("{}", res);

    return 0;
}
