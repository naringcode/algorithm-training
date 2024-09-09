#include <bits/stdc++.h>

using namespace std;

int n;

vector<string> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int h = 0; h < n; h++)
    {
        string temp = "";

        for (int i = 0; i < n - h - 1; i++)
        {
            temp.push_back(' ');
        }

        for (int i = 0; i <= h; i++)
        {
            temp += "* ";
        }

        res.push_back(temp);
    }

    for (string& str : res)
    {
        cout << str << '\n';
    }

    return 0;
}
