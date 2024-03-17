#include <bits/stdc++.h>

using namespace std;

int n;
int m;

int arr[100'004];
int sum;

int l;
int r;

int res;

bool go(int mid)
{
    int day = 1;
    int accum = 0;

    for (int i = 0; i < n; i++)
    {
        if (accum + arr[i] > mid)
        {
            day++;

            accum = 0;
        }

        accum += arr[i];
    }

    return day > m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        sum += arr[i];

        l = max(l, arr[i]);
    }

    r = sum;
    // res = sum;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (go(mid)) // 날짜 초과 -> mid를 늘려서 날짜를 쪼개는 행위를 줄여야 한다!
        {
            l = mid + 1;
        }
        else // 딱 떨어지거나 날짜 미달 -> mid를 줄여서 더 많이 쪼갤 수 있게 해야 한다!
        {
            // res = min(res, mid);

            r = mid - 1;
        }
    }

    cout << l;

    return 0;
}