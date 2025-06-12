#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int h1;
int m1;
int s1;

int h2;
int m2;
int s2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i : views::iota(0, 3))
    {
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

        h2 -= h1;
        m2 -= m1;
        s2 -= s1;

        if (s2 < 0)
        {
            s2 += 60;
            m2--;
        }

        if (m2 < 0)
        {
            m2 += 60;
            h2--;
        }

        println("{} {} {}", h2, m2, s2);
    }

    return 0;
}
