#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
string str;

vector<ll> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> str;
        ranges::reverse(str);

        ll temp = atoll(str.c_str());
        vec.push_back(temp);
    }

    ranges::sort(vec);

    for (ll elem : vec)
    {
        println("{}", elem);
    }

    return 0;
}
