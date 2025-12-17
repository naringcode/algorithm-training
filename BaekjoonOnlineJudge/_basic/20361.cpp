#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int x;
int k;

int a;
int b;

int cur;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> x >> k;

    cur = x;

    for (int i : views::iota(0, k))
    {
        cin >> a >> b;

        if (cur == a)
        {
            cur = b;
        }
        else if (cur == b)
        {
            cur = a;
        }
    }

    println("{}", cur);

    return 0;
}
