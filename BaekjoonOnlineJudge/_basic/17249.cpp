#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;

int lcnt;
int rcnt;

bool flag;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (auto [l, r] : views::zip(str, str | views::drop(1)))
    {
        if (l == '(' && r == '^')
        {
            flag = true;

            continue;
        }

        if (flag == false && l == '@' && r == '=')
        {
            lcnt++;
        }
        else if (flag == true && l == '=' && r == '@')
        {
            rcnt++;
        }
    }

    println("{} {}", lcnt, rcnt);

    return 0;
}
