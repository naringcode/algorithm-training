#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int m;

int a;
int b;
int s;

int counterclockwise;
int rot = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> m;

    while (m--)
    {
        cin >> a >> b >> s;

        if (s == 1)
        {
            counterclockwise = 1 - counterclockwise;
        }

        rot = (rot / a) * b;
    }

    println("{} {}", counterclockwise, rot);

    return 0;
}
