#include <bits/stdc++.h>

using namespace std;

set<string> dic;

int n;
int m;

string str;

set<string> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        dic.insert(str);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> str;

        if (dic.end() != dic.find(str))
        {
            res.insert(str);
        }
    }

    cout << res.size() << '\n';

    for (auto& elem : res)
    {
        cout << elem << '\n';
    }

    return 0;
}
