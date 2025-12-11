#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int x;
int y;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> x >> y;

    if (x > y)
    {
        println("{}", x + y);
    }
    else
    {
        println("{}", y - x);
    }

    return 0;
}
