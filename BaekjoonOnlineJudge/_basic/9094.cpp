#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int n;
int m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        int res = 0;

        cin >> n >> m;
        
        for (int a = 1; a < n; a++)
        {
            for (int b = a + 1; b < n; b++)
            {
                int temp = ((a * a) + (b * b) + m) % (a * b);

                if (temp == 0)
                {
                    res++;
                }
            }
        }

        println("{}", res);
    }

    return 0;
}
