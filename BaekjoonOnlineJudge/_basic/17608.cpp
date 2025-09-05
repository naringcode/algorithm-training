#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
vector<int> vec;

int h;
int res;

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

        vec.push_back(temp);
    }

    for (int elem : vec | views::reverse)
    {
        if (elem > h)
        {
            h = elem;
            res++;
        }
    }

    println("{}", res);

    return 0;
}
