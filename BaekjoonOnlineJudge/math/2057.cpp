#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll fact[21];

ll n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    fact[0] = 1;
    
    for (int idx : views::iota(1, ssize(fact)))
    {
        fact[idx] = fact[idx - 1] * idx;
    }

    cin >> n;

    if (n == 0)
    {
        println("NO");

        return 0;
    }
    
    for (int idx : views::iota(0, ssize(fact)) | views::reverse)
    {
        if (n >= fact[idx])
        {
            n -= fact[idx];
        }
    }
    
    if (n == 0)
    {
        println("YES");
    }
    else
    {
        println("NO");
    }

    return 0;
}
