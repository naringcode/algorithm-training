#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int arr[5];

int mx;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int cnt : views::iota(0, n))
    {
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

        int temp = 0;

        for (int i : views::iota(0, 5))
        {
            for (int j : views::iota(i + 1, 5))
            {
                for (int k : views::iota(j + 1, 5))
                {
                    int num = (arr[i] + arr[j] + arr[k]) % 10;

                    temp = max(temp, num);
                }
            }
        }

        if (mx <= temp)
        {
            mx = temp;

            res = cnt + 1;
        }
    }

    println("{}", res);

    return 0;
}
