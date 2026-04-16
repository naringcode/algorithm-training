#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a;
int b;

vector<int> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;

    while (a > 0 || b > 0)
    {
        int temp = a % 10 + b % 10;
        res.push_back(temp);

        a /= 10;
        b /= 10;
    }

    ranges::reverse(res);

    for (int elem : res)
    {
        print("{}", elem);
    }

    return 0;
}
