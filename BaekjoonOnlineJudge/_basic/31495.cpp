#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    getline(cin, str);

    if (str.size() <= 2 || str.front() != '"' || str.back() != '"')
    {
        println("CE");
    }
    else
    {
        println("{}", ranges::to<string>(str | views::drop(1) | views::take(str.size() - 2)));
    }

    return 0;
}
