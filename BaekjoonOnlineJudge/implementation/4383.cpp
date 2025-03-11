#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int n;

int m;
int prv;

set<int> remain;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (cin >> n)
    {
        if (n == 1)
        {
            cin >> m;
    
            println("Jolly");
    
            continue;
        }
    
        remain.clear();
        ranges::copy(views::iota(1, n), inserter(remain, remain.begin()));
    
        cin >> prv;
    
        for (int i = 1; i < n; i++)
        {
            cin >> m;
    
            remain.erase(abs(prv - m));
            prv = m;
        }
    
        if (remain.empty())
        {
            println("Jolly");
        }
        else
        {
            println("Not jolly");
        }
    }


    return 0;
}
