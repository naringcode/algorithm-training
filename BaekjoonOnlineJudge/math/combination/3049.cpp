#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    println("{}", (n * (n - 1) * (n - 2) * (n - 3)) / 24);
    
    return 0;
}
