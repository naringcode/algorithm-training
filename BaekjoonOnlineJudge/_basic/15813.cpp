#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
string str;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> str;

    auto view = str | views::transform([](char ch) { return ch - 'A' + 1; });

    res = accumulate(view.begin(), view.end(), 0);

    println("{}", res);
    
    return 0;
}
