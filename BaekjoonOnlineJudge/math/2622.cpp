#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int n;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int k = n - i - j;

            if (k <= 0)
                break;

            if (j > k)
                break;

            if (i + j > k)
            {
                res++;
            }
        }
    }

    println("{}", res);

    return 0;
}
