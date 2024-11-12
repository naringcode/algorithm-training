#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;

int p1;
int p2;

int sum;
int res;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    p1 = 0;
    p2 = 1;

    sum = 1;

    while (p1 < p2)
    {
        if (sum == n)
        {
            p2++;
            sum += p2;

            res++;
        }
        else if (sum > n)
        {
            p1++;
            sum -= p1;
        }
        else if (sum < n)
        {
            p2++;
            sum += p2;
        }
    }

    cout << res;

    return 0;
}
