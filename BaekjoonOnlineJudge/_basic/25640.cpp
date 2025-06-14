#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string a;

int n;
string b;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a;
    cin >> n;

    while (n--)
    {
        cin >> b;

        if (a == b)
        {
            res++;
        }
    }

    println("{}", res);

    return 0;
}
