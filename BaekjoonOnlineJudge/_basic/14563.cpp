#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int n;

int sum;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        sum = 0;

        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }

        if (sum == n)
        {
            println("Perfect");
        }
        else if (sum > n)
        {
            println("Abundant");
        }
        else
        {
            println("Deficient");
        }
    }

    return 0;
}
