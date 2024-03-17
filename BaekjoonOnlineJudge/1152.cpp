#include <bits/stdc++.h>

using namespace std;

string str;
bool   check = false;

int cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    getline(cin, str);

    for (char ch : str)
    {
        if (' ' != ch)
        {
            check = true;
        }
        else if (true == check)
        {
            cnt++;

            check = false;
        }
    }

    if (true == check)
    {
        cnt++;
    }

    cout << cnt;

    return 0;
}
