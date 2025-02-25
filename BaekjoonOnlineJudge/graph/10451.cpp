#include <bits/stdc++.h>
#include <print>

using namespace std;

using ll = long long;

int  arr[1004];
bool chk[1004];

int t;
int n;

bool go(int idx)
{
    if (chk[idx] == true)
        return false;

    while (chk[idx] == false)
    {
        chk[idx] = true;

        idx = arr[idx - 1];
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;
        ranges::for_each_n(arr, n, [](int& elem){ cin >> elem; });
        ranges::fill_n(chk, n + 1, false);

        int ret = ranges::count_if(arr, arr + n, [](int elem) { return go(elem); });
        println(cout, "{}", ret);
    }

    return 0;
}
