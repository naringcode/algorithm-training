#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

string s;
int bonus;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> s;
    
    for (int idx : views::iota(0, n))
    {
        if (s[idx] == 'O')
        {
            res += (idx + 1) + bonus;    

            bonus++;
        }
        else
        {
            bonus = 0;
        }
    }

    println("{}", res);

    return 0;
}
