#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> str;

        println("{}", stoi(str, nullptr, 2));
    }

    return 0;
}
