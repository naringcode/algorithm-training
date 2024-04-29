#include <bits/stdc++.h>

using namespace std;

int r;
int c;

string str;

vector<string> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        cin >> str;

        str += str;

        reverse(str.begin() + c, str.end());

        res.push_back(str);
    }

    for (auto idx = r - 1; idx >= 0; idx--)
    {
        res.push_back(res[idx]);
    }

    cin >> r >> c;
    r--;
    c--;

    res[r][c] = res[r][c] == '#' ? '.' : '#';

    for (string& elem : res)
    {
        cout << elem << '\n';
    }

    return 0;
}
