#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

set<string> keywords;
string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i : views::iota(0, n))
    {
        cin >> str;

        keywords.insert(str);
    }

    for (int i : views::iota(0, m))
    {
        cin >> str;

        auto subV = str | views::split(',');
        for (auto subStrR : subV)
        {
            string subStr = ranges::to<string>(subStrR);

            keywords.erase(subStr);
        }

        println("{}", keywords.size());
    }

    return 0;
}
