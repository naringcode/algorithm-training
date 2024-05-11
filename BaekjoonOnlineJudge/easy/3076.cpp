#include <bits/stdc++.h>

using namespace std;

int a, b, c, d;

vector<string> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c >> d;

    for (int y = 0; y < a; y++)
    {
        string str;

        for (int x = 0; x < b; x++)
        {
            char color = (x + y) % 2 ? '.' : 'X';

            for (int cnt = 0; cnt < d; cnt++)
            {
                str.push_back(color);
            }
        }

        for (int cnt = 0; cnt < c; cnt++)
        {
            res.push_back(str);
        }
    }

    for (auto& elem : res)
    {
        cout << elem << '\n';
    }

    return 0;
}
