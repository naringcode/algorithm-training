#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int x;
int a;
int t;

vector<pair<int, int>> vec;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> x;

        if (x == 0)
        {
            if (vec.size() > 0)
            {
                vec.back().second--;

                if (vec.back().second == 0)
                {
                    res += vec.back().first;

                    vec.pop_back();
                }
            }
            
            continue;
        }

        cin >> a >> t;
        t--;

        if (t == 0)
        {
            res += a;
        }
        else
        {
            vec.push_back({ a, t });
        }
    }

    println("{}", res);

    return 0;
}
