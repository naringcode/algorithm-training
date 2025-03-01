#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int t;
string n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        int cnt = 0;

        while (n != "6174")
        {
            cnt++;

            string tempMx = n;
            string tempMn = n;

            ranges::sort(tempMx, greater{ });
            ranges::sort(tempMn);

            int tempRes = stoi(tempMx) - stoi(tempMn);
            n = to_string(tempRes);

            while (n.length() != 4)
            {
                n = "0" + n;
            }
        }

        println("{}", cnt);
    }

    return 0;
}
