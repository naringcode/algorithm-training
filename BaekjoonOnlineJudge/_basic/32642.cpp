#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

ll ang;
ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    
    while (n--)
    {
        int temp;
        cin >> temp;

        if (temp == 0)
        {
            ang--;
        }
        else
        {
            ang++;
        }

        res += ang;
    }

    println("{}", res);

    return 0;
}
