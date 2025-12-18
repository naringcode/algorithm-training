#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int k;

int temp;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (cin >> n >> k)
    {
        temp = n;
        res = n;

        while (temp >= k)
        {
            res += temp / k;
            temp = temp % k + temp / k;
        }

        println("{}", res);
    }

    return 0;
}
