#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a;
int b;
int c;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int cnt = 0;

    while (true)
    {
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
            break;

        cnt++;
        cout << "Triangle #" << cnt << "\n";

        char  ch;
        float res;

        if (a == -1)
        {
            b *= b;
            c *= c;

            ch  = 'a';
            res = c - b;
        }
        else if (b == -1)
        {
            a *= a;
            c *= c;
            
            ch  = 'b';
            res = c - a;
        }
        else // if (c == -1)
        {
            a *= a;
            b *= b;
            
            ch  = 'c';
            res = a + b;
        }

        res = sqrt(res);

        if (res > 0)
        {
            // string str = format("{} = {:.3f}", ch, res);
            // cout << str << "\n";

            cout << fixed;
            cout.precision(3);

            cout << ch << " = " << res << "\n";
        }
        else
        {
            cout << "Impossible." << "\n";
        }

        cout << "\n";
    }

    return 0;
}
