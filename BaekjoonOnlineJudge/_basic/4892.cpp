#include <bits/stdc++.h>

using namespace std;

int n0;
int n1;
int n2;
int n3;
int n4;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int cnt = 1;

    while (true)
    {
        cin >> n0;

        if (0 == n0)
            break;

        n1 = n0 * 3;

        if (0 == n1 % 2)
        {
            n2 = n1 / 2;
        }
        else
        {
            n2 = (n1 + 1) / 2;
        }

        n3 = n2 * 3;
        n4 = n3 / 9;

        string res = to_string(cnt) + ". ";

        if (0 == n1 % 2)
        {
            res += "even ";
        }
        else
        {
            res += "odd ";
        }

        res += to_string(n4);

        cout << res << '\n';

        cnt++;
    }

    return 0;
}
