#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

int k;

vector<int> vec;

bool res = true;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i : views::iota(0, m))
    {
        vec.clear();

        cin >> k;

        while (k--)
        {
            int temp;
            cin >> temp;

            vec.push_back(temp);
        }

        if (res == false)
            continue;

        for (auto [curr, next] : views::zip(vec, vec | views::drop(1)))
        {
            if (curr < next)
            {
                res = false;

                break;
            }
        }
    }

    println("{}", res ? "Yes" : "No");

    return 0;
}
