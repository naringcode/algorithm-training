#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;
int m;

int arr[10'004];

int p1;
int p2;

int sum;
int res;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    p1 = 0;
    p2 = 0;

    sum = arr[p1];

    while (p1 <= p2 && p2 < n)
    {
        if (sum == m)
        {
            p2++;
            sum += arr[p2];

            res++;
        }
        else if (sum > m)
        {
            sum -= arr[p1];
            p1++;

            if (p1 > p2)
            {
                p2 = p1;
                sum = arr[p1];
            }
        }
        else if (sum < m)
        {
            p2++;
            sum += arr[p2];
        }
    }

    cout << res;

    return 0;
}
