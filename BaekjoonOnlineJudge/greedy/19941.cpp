#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int k;

string str;

bool arr[20'004];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;
    cin >> str;

    for (int i : views::iota(0, n))
    {
        if (str[i] == 'H')
            continue;

        int l = max(0, i - k);
        int r = min(n - 1, i + k);

        // 왼쪽부터 먹는다.
        for (int j : views::iota(l, r + 1))
        {
            if (str[j] == 'H' && arr[j] == false)
            {
                arr[j] = true;
                res++;

                break;
            }
        }
    }

    println("{}", res);

    return 0;
}
