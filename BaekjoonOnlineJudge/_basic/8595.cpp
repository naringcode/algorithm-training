#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
string str;

string hidden;
ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> str;

    str += 'a';

    for (char ch : str)
    {
        if (ch >= '0' && ch <= '9')
        {
            str += ch;

            continue;
        }

        if (str.size() > 0)
        {
            res += atoll(str.data());

            str = "";
        }
    }

    println("{}", res);

    return 0;
}
