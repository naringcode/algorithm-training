#include <bits/stdc++.h>

using namespace std;

int r;
int c;

int zr;
int zc;

vector<string> in;
vector<string> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> r >> c >> zr >> zc;

    for (int i = 0; i < r; i++)
    {
        in.emplace_back();

        cin >> in.back();
    }

    for (string& str : in)
    {
        string temp = "";

        for (char& ch : str)
        {
            for (int i = 0; i < zc; i++)
            {
                temp.push_back(ch);
            }
        }

        for (int i = 0; i < zr; i++)
        {
            res.push_back(temp);
        }
    }

    for (string& str : res)
    {
        cout << str << '\n';
    }

    return 0;
}
