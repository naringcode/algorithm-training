#include <bits/stdc++.h>

using namespace std;

int n;
int m;

set<string> ss;
string str;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        ss.insert(str);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> str;

        if (ss.end() != ss.find(str))
        {
            res++;
        }
    }

    cout << res;

    return 0;
}
