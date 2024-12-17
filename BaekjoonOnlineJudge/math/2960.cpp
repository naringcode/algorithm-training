#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int k;

bool arr[1004];

int res;

int go()
{
    cin >> n >> k;

    for (int i = 2; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            if (true == arr[j])
                continue;

            arr[j] = true;
            k--;

            if (k == 0)
                return j;
        }
    }

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cout << go();

    return 0;
}
