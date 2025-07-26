#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int k;
int p;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k >> p;

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;

        for (int j = 0; j < k; j++)
        {
            int temp;
            cin >> temp;

            if (temp == 0)
            {
                cnt++;
            }
        }

        if (cnt < p)
        {
            res++;
        }
    }

    println("{}", res);

    return 0;
}
