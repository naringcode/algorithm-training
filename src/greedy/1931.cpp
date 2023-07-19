#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

ll a;
ll b;

vector<pair<ll, ll>> vec;
ll temp;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        vec.push_back({ b, a });
    }

    sort(vec.begin(), vec.end());

    for (auto& pair : vec)
    {
        if (temp <= pair.second)
        {
            temp = pair.first;

            res++;
        }
    }

    cout << res;

    return 0;
}