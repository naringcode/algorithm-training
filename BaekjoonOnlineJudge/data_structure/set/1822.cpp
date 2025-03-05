#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int n1;
int n2;

set<int> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n1 >> n2;

    while (n1--)
    {
        int temp;
        cin >> temp;

        res.insert(temp);
    }
    
    while (n2--)
    {
        int temp;
        cin >> temp;

        res.erase(temp);
    }

    println("{}", res.size());
    ranges::for_each(res, [](int elem) { print("{} ", elem); });

    return 0;
}
