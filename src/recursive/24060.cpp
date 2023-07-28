#include<bits/stdc++.h>

using namespace std;

int n;
int k;

int arr[500'004];
int tmp[500'004];

int cnt;
int res = -1;

void merge_sort(int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;

        merge_sort(left, mid);
        merge_sort(mid + 1, right);

        // merge
        int i = left;
        int j = mid + 1;
        int t = 1;

        while (i <= mid && j <= right)
        {
            if (arr[i] <= arr[j])
            {
                tmp[t++] = arr[i++];
            }
            else
            {
                tmp[t++] = arr[j++];
            }
        }

        while (i <= mid)
        {
            tmp[t++] = arr[i++];
        }

        while (j <= right)
        {
            tmp[t++] = arr[j++];
        }

        i = left;
        t = 1;

        while (i <= right)
        {
            arr[i++] = tmp[t++];
            
            if (k == ++cnt)
            {
                res = tmp[t - 1];
            }
        }
        
        // for (int i = 1; i <= n; i++)
        // {
        //     cout << arr[i] << ' ';
        // }
        //
        // cout << '\n';
    }
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);

    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    merge_sort(1, n);

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << arr[i] << ' ';
    // }

    cout << res;

    return 0;
}
