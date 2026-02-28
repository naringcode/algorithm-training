#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

string str;

int res = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    n--;

    cin >> str;

    while (n--)
    {
        string temp;
        cin >> temp;

        if (str.back() != temp.front())
        {
            res = 0;
        }
    }

    println("{}", res);
    
    return 0;
}
