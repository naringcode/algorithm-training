#include <bits/stdc++.h>

using namespace std;

int a;
int b;

int mx = 0;

int revNum(int val)
{
    int ret = 0;

    while (val > 0)
    {
        ret *= 10;
        ret += val % 10;

        val /= 10;
    }

    return ret;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;

    int temp = 0;

    for (int i = 0; i < b; i++)
    {
        temp += a;

        mx = max(mx, revNum(temp));
    }

    cout << mx;

    return 0;
}
