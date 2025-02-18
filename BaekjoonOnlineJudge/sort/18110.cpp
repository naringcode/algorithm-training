#include <bits/stdc++.h>
#include <ranges>

using namespace std;

using ll = long long;

vector<double> vec;
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    vec.resize(n);

    if (n == 0)
    {
        cout << 0;

        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    ranges::sort(vec);

    int cut = (int)round((double)n * 0.15);
    int cnt = n - cut * 2;
    
    auto view = vec | views::drop(cut)
                    | views::take(cnt);

    int res = (int)round(std::accumulate(view.begin(), view.end(), 0.0) / cnt);

    cout << res;

    return 0;
}