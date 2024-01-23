#include <bits/stdc++.h>
#include <cstdint>

using namespace std;

using ll = long long;

int n;

ll num;
__int128_t sum;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int times = 0; times < 3; times++)
    {
        cin >> n;
        sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> num;
            sum += num;
        }

        if (0 == sum)
        {
            cout << "0\n";
        }
        else if (sum > 0)
        {
            cout << "+\n";
        }
        else // if (sum < 0)
        {
            cout << "-\n";
        }
    }

    return 0;
}
