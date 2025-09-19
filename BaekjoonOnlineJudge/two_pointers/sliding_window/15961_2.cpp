#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n; // 접시
int d; // 가짓수
int k; // 연속
int c; // 쿠폰

int arr[3'010'000];

int cntTable[3004];

int currCnt;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> d >> k >> c;

    for (int idx : views::iota(0, n))
    {
        cin >> arr[idx];
    }

    for (int idx : views::iota(0, k))
    {
        arr[idx + n] = arr[idx];
    }

    for (int idx : views::iota(0, k))
    {
        if (cntTable[arr[idx]] == 0)
        {
            res++;
        }

        cntTable[arr[idx]]++;
    }

    if (cntTable[c] == 0)
    {
        res++;
    }

    cntTable[c]++;

    currCnt = res;

    for (int idx : views::iota(k, n + k))
    {
        cntTable[arr[idx - k]]--;
        if (cntTable[arr[idx - k]] == 0)
        {
            currCnt--;
        }

        if (cntTable[arr[idx]] == 0)
        {
            currCnt++;
        }

        cntTable[arr[idx]]++;

        res = max(res, currCnt);
    }

    println("{}", res);

    return 0;
}
