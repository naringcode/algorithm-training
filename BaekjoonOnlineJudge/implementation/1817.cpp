#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

vector<int> vec;

int curr;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i : views::iota(0, n))
    {
        int temp;
        cin >> temp;

        vec.push_back(temp);
    }

    for (int elem : vec | views::reverse)
    {
        curr -= elem;

        if (curr < 0)
        {
            curr = m - elem;

            res++;
        }
    }

    println("{}", res);

    return 0;
}
