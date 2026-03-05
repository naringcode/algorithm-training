#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int a;
int b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> a >> b;

    int temp = max(n, b);

    if (a < temp)
    {
        println("Bus");
    }
    else if (a > temp)
    {
        println("Subway");
    }
    else
    {
        println("Anything");
    }
    
    return 0;
}
