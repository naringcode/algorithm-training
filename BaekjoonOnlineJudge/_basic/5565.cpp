#include <bits/stdc++.h>

using namespace std;

int total;
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> total;

    for (int i = 0; i < 9; i++)
    {
        cin >> n;

        total -= n;
    }

    cout << total;

    return 0;
}
