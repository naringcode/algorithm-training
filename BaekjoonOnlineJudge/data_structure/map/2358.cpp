#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int x;
int y;

map<ll, ll> mpX;
map<ll, ll> mpY;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    
    while (n--)
    {
        cin >> x >> y;

        mpX[x]++;
        mpY[y]++;
    }

    for (auto [_, cnt] : mpX)
    {
        if (cnt >= 2)
        {
            res++;
        }
    }
    
    for (auto [_, cnt] : mpY)
    {
        if (cnt >= 2)
        {
            res++;
        }
    }

    println("{}", res);

    return 0;
}
