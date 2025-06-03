#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    getline(cin, str);

    auto view = str | views::split(',');

    for (auto elem : view)
    {
        string temp = ranges::to<string>(elem);

        res += atoi(temp.data());
    }

    println("{}", res);

    return 0;
}
