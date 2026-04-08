#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;

double a;
double b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> a >> b;

        println("{}", (int)ceil((a * a) / (b * b)));
    }
    
    return 0;
}
