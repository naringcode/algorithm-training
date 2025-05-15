#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a;
int b;
int m;

int arr[30];
vector<int> res;

ll decimal;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> m;

    for (int i : views::iota(0, m))
    {
        cin >> arr[i];
    }

    // a -> 10
    for (int i : views::iota(0, m))
    {
        decimal = decimal * a + arr[i];
    }

    // 10 -> b
    if (decimal == 0)
    {
        res.push_back(0);
    }

    while (decimal > 0)
    {
        res.push_back(decimal % b);
        decimal /= b;
    }

    ranges::reverse(res);

    for (int num : res)
    {
        print("{} ", num);
    }

    return 0;
}
