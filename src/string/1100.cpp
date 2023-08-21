#include <bits/stdc++.h>

using namespace std;

string str;

int state = 0;
string board[2] = { "FXFXFXFX", "XFXFXFXF" };

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 8; i++)
    {
        cin >> str;

        for (int j = 0; j < 8; j++)
        {
            if (str[j] == board[state][j])
            {
                res++;
            }
        }

        state = !state;
    }

    cout << res;

    return 0;
}