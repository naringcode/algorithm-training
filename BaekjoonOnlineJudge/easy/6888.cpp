#include <bits/stdc++.h>

using namespace std;

int a;
int b;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;

    while (a <= b)
    {
        cout << "All positions change in year " << a << '\n';

        a += 60;
    }

    return 0;
}
