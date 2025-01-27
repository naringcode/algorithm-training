#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    std::transform(str.begin(), str.end(), str.begin(), [](char ch) { return ::toupper(ch); } );

    cout << str;

    return 0;
}
