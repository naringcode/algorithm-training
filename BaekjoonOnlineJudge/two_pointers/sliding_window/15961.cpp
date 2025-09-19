#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n; // 접시
int d; // 가짓수
int k; // 연속
int c; // 쿠폰

int arr[3'010'000];

unordered_map<int, int> mpCnt;
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
        mpCnt[arr[idx]]++;
    }

    mpCnt[c]++;

    res = mpCnt.size();

    for (int idx : views::iota(k, n + k))
    {
        auto iter = mpCnt.find(arr[idx - k]);
        iter->second--;

        if (iter->second == 0)
        {
            mpCnt.erase(iter);
        }

        mpCnt[arr[idx]]++;

        res = max(res, (int)mpCnt.size());
    }

    println("{}", res);

    return 0;
}
