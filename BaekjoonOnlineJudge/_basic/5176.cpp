#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int k;
int p;
int m;

set<int> mySet;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> k;

    while (k--)
    {
        cin >> p >> m;

        mySet.clear();
        res = 0;

        while (p--)
        {
            int temp;
            cin >> temp;

            if (mySet.contains(temp) == true)
            {
                res++;
            }
            else
            {
                mySet.insert(temp);
            }
        }

        println("{}", res);
    }

    return 0;
}
