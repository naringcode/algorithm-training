#include <bits/stdc++.h>

using namespace std;

int n;
int m;

set<int> intSet;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m;

        intSet.insert(m);
    }

    cout << *intSet.begin() * *intSet.rbegin();

    return 0;
}
