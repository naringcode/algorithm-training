#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

ll arr[100'004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < m; i++)
    {
        ll leftV;
        ll rightV;

        cin >> leftV >> rightV;

        int idxL;
        int idxR;

        int startIdx;
        int endIdx;

        // min
        startIdx = 0;
        endIdx   = n - 1;

        while (startIdx <= endIdx)
        {
            int midIdx = (startIdx + endIdx) / 2;

            if (arr[midIdx] < leftV)
            {
                startIdx = midIdx + 1;
            }
            else
            {
                endIdx = midIdx - 1;
            }
        }

        idxL = startIdx;

        // max
        startIdx = 0;
        endIdx   = n - 1;

        while (startIdx <= endIdx)
        {
            int midIdx = (startIdx + endIdx) / 2;

            if (arr[midIdx] <= rightV)
            {
                startIdx = midIdx + 1;
            }
            else
            {
                endIdx = midIdx - 1;
            }
        }

        idxR = startIdx;

        // res
        cout << idxR - idxL << '\n';
    }

    return 0;
}
