#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

int x;

vector<int> vec;

bool go(int mid)
{
    int prv = 0;

    for (int elem : vec)
    {
        if (elem - mid > prv)
            return false;

        prv = elem + mid;
    }

    return prv >= n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i : views::iota(0, m))
    {
        cin >> x;

        vec.push_back(x);
    }

    int low = 1;
    int high = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (go(mid))
        {
            x = mid;

            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    println("{}", x);

    return 0;
}
