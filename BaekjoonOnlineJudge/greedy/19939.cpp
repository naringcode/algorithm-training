#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // n개의 공, k개의 바구니
    cin >> n >> k;

    int minN = (k * (k + 1)) / 2; // 등차수열 합

    if (n < minN)
    {
        println("-1");
    }
    else
    {
        int r = minN - n;

        if (r % k == 0)
        {
            println("{}", k - 1);
        }
        else
        {
            println("{}", k);
        }
    }

    return 0;
}
