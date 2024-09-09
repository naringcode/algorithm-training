#include <bits/stdc++.h>

using namespace std;

int t;
int w;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> w;

        if (1 == w)
        {
            cout << "#\n\n";

            continue;
        }

        string strA;
        string strB;

        for (int i = 0; i < w; i++)
        {
            strA += '#';
        }
        
        strB.push_back('#');

        for (int i = 0; i < w - 2; i++)
        {
            strB.push_back('J');
        }

        strB.push_back('#');

        cout << strA << '\n';

        for (int i = 0; i < w - 2; i++)
        {
            cout << strB << '\n';
        }

        cout << strA << '\n' << '\n';
    }

    return 0;
}
