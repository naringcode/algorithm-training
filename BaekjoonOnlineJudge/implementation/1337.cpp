#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
set<int> mySet;

int res = 4;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    
    while (n--)
    {
        int temp;
        cin >> temp;

        mySet.insert(temp);
    }

    for (int elem : mySet)
    {
        int temp = 0;

        for (int i : views::iota(1, 5))
        {
            if (!mySet.contains(elem + i))
            {
                temp++;
            }
        }

        res = min(res, temp);
    }

    println("{}", res);

    return 0;
}
