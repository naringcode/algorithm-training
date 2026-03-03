#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a;
int p;
int c;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> p >> c;

    println("{}", max(a + c, p));
    
    return 0;
}
