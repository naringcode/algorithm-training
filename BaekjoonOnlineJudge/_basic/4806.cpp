#include <bits/stdc++.h>

using namespace std;

string str;

int cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (getline(cin, str))
    {
        cnt++;
    }

    cout << cnt;

    return 0;
}
