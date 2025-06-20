#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> str;

    auto myView = str | views::drop(n - 5);

    string res = ranges::to<string>(myView);

    println("{}", res);

    return 0;
}
