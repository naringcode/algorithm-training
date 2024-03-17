#include <bits/stdc++.h>

using namespace std;

int t;

int n;
int m;

int arrA[20004];
int arrB[20004];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int tt = 0; tt < t; tt++)
    {
        res = 0;

        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            cin >> arrA[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> arrB[i];
        }

        sort(arrA, arrA + n);

        // sort(arrB, arrB + m, greater());
        sort(arrB, arrB + m);

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {
        //         if (arrA[i] > arrB[j])
        //         {
        //             res += m - j;
        //
        //             break;
        //         }
        //     }
        // }

        for (int i = 0; i < n; i++)
        {
            res += lower_bound(arrB, arrB + m, arrA[i]) - arrB;
        }

        cout << res << '\n';
    }

    return 0;
}