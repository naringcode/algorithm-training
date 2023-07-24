#include <bits/stdc++.h>

using namespace std;

int n; // 강의 수
int m; // 블루레이 개수

int arr[100'004]; // 시간

int l;
int r;

int res = 999'999'999;

// 블루레이의 개수를 가급적 줄인다? -> 결정 문제로 전환 가능?
//
// 블루레이의 크기(용량)을 결정하는 문제인 듯

bool go(int mid)
{
    int num = 1;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (sum + arr[i] > mid)
        {
            sum = 0;

            num++;
        }

        sum += arr[i];
    }

    // 블루레이의 개수가 초과되는 상황
    return num > m;
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

        l = max(l, arr[i]);
        r = max(r, arr[i] * n);
    }

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (go(mid)) // 개수 초과
        {
            l = mid + 1;
        }
        else // 개수 딱 맞거나 미만
        {
            res = min(res, mid);

            go(mid);

            r = mid - 1;
        }
    }

    cout << res;

    return 0;
}