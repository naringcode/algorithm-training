#include <bits/stdc++.h>

using namespace std;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    int cnt = 0;

    for (char ch : str)
    {
        cout << ch;

        cnt++;

        if (0 == cnt % 10)
        {
            cout << '\n';

            cnt = 0;
        }
    }

    return 0;
}
