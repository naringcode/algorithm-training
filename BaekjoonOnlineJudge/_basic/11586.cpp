#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

vector<string> vec;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        string temp;
        cin >> temp;

        vec.push_back(temp);
    }

    cin >> n;

    if (n == 2)
    {
        for (auto& elem : vec)
        {
            ranges::reverse(elem);
        }
    }
    else if (n == 3)
    {
        ranges::reverse(vec);
    }

    for (const auto& elem : vec)
    {
        println("{}", elem);
    }

    return 0;
}
