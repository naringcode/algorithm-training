#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a;
int b;
int c;
int d;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> a >> b >> c >> d;

        if (a == 0 && b == 0 && c == 0 && d == 0)
            break;

        println("{} {}", c - b, d - a);
    }

    return 0;
}
