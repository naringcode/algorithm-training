#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int k;
string s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> k >> s;

    for (int idx : views::iota(0, ssize(s)) | views::stride(k))
    {
        print("{}", s[idx]);
    }

    return 0;
}
