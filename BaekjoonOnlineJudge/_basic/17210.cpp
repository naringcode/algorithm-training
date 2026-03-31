#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;
bool s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> s;

    if (n >= 6)
    {
        println("Love is open door");
    }
    else
    {
        bool temp = s;
        
        for (int i : views::iota(0, n - 1))
        {
            s = !s;

            println("{}", (int)s);
        }
    }

    return 0;
}
