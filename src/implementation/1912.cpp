#include <bits/stdc++.h>

using namespace std;

int n;
int num;

int sum;

int res = -999'999'999;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        sum += num;

        res = max(res, sum);

        if (sum < 0)
        {
            sum = 0;
        }
    }
    
    cout << res;

    return 0;
}