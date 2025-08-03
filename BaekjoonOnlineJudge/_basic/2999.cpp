#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;

int r;
int c;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (int tempR : views::iota(1, ssize(str) + 1))
    {
        if (str.length() % tempR != 0)
            continue;

        int tempC = str.length() / tempR;

        if (tempR <= tempC)
        {
            r = tempR;
            c = tempC;
        }
    }
    
    swap(r, c);

    for (auto [x, y] : views::cartesian_product(views::iota(0, c), views::iota(0, r)))
    {
        int idx = y * c + x;

        print("{}", str[idx]);
    }

    return 0;
}
