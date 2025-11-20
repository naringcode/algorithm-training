#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int s;

int arr[24];

int res;

void go(int idx, int sum)
{
    if (idx == n)
    {
        if (sum == s)
        {
            res++;
        }

        return;
    }

    go(idx + 1, sum);
    go(idx + 1, sum + arr[idx]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> s;
   
    for (int idx : views::iota(0, n))
    {
        cin >> arr[idx];
    }

    go(0, 0);

    // 예외
    if (s == 0)
    {
        res--;
    }

    println("{}", res);

    return 0;
}
