#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int n;
int m;

vector<int> vecA;
vector<int> vecB;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a;
        int b;
        cin >> a >> b;
        
        vecA.push_back(a);
        vecB.push_back(b);
    }

    ranges::sort(vecA);
    ranges::sort(vecB);

    auto [a, b] = *(ranges::zip_view(vecA, vecB).begin());

    res = (n / 6) * a + ((n % 6 == 0) ? 0 : a);
    res = min(res, n * b);
    res = min(res, (n / 6) * a + (n % 6) * b);

    println("{}", res);

    return 0;
}
