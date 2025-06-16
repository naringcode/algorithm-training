#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
string str;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> str;

        str = str.substr(2);

        if (atoi(str.data()) <= 90)
        {
            res++;
        }
    }

    println("{}", res);

    return 0;
}
