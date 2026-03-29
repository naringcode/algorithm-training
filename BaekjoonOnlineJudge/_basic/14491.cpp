#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

vector<int> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    do
    {
        res.push_back(n % 9);
        n /= 9;

    } while (n != 0);

    ranges::reverse(res);

    for (int i : res)
    {
        print("{}", i);
    }

    return 0;
}
