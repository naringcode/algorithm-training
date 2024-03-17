#include <bits/stdc++.h>

using namespace std;

int n;

string s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> s;

    if ('G' == s[n - 1])
    {
        s.pop_back();
    }
    else
    {
        s.push_back('G');
    }

    cout << s;

    return 0;
}
