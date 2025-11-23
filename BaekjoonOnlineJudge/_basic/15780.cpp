#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int k;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    for (int i : views::iota(0, k))
    {
        int temp;
        cin >> temp;

        res += (temp / 2) + (temp % 2);
    }

    if (res >= n)
    {
        println("YES");
    }
    else
    {
        println("NO");
    }

    return 0;
}
