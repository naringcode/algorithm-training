#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int  arr[100'004];
bool flags[100'004];

int l;
int r;

ll res;

// 만들어진 집합에 같은 수가 존재해선 안 된다.
//
// 1 2 3 1 2
// - - -
//   - - -
//     - - -
//
// 1 / 1, 2 / 1, 2, 3
// 2 / 2, 3 / 2, 3, 1
// 3 / 3, 1 / 3, 1, 2
// 1 / 1, 2
// 3
// ==> 12개
//
// 1 1 1 1 1
//
// 1
// 1
// 1
// 1
// 1
// ==> 5개
//
// 1 2 2 2 <- 이건 어떻게 되는 거지?
//
// 1 / 1, 2
// 2
// 2
// 2
// 플래그? 카운트? 일단 누적?
// left를 이동시키기 전까지 일단 증가시키기?

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (r < n)
    {
        if (false == flags[arr[r]])
        {
            flags[arr[r]] = true;

            r++;
        }
        else
        {
            flags[arr[l]] = false;

            res += ll(r - l);

            l++;
        }
    }

    ll temp = r - l;

    res += (temp * (temp + 1)) / 2;

    cout << res;

    return 0;
}