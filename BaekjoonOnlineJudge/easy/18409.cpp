#include <bits/stdc++.h>

using namespace std;

int n;
string str;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> str;

    for (char ch : str)
    {
        if ('a' == ch || 'e' == ch || 'i' == ch || 'o' == ch || 'u' == ch)
        {
            res++;
        }
    }

    cout << res;

    return 0;
}
