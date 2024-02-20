#include <bits/stdc++.h>

using namespace std;

int n;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    res = sqrt((float)n);

    cout << "The largest square has side length " << res << ".";

    return 0;
}
