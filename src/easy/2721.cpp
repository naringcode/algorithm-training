#include <bits/stdc++.h>

using namespace std;

int n;
int64_t dpT[304];
int64_t dpSum[304];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 1; i < 304; i++)
    {
        dpT[i] = dpT[i - 1] + i;
    }

    for (int i = 1; i < 304; i++)
    {
        dpSum[i] = dpSum[i - 1] + i * dpT[i + 1];
    }

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        cout << dpSum[num] << '\n';
    }

    return 0;
}
