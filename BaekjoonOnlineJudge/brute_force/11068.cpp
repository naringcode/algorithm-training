#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int n;

bool go(int d)
{
    vector<int> vec;
    int num = n;

    while (num != 0)
    {
        vec.push_back(num % d);
        num /= d;
    }

    for (auto [x, y] : views::zip(vec, vec | views::reverse) | views::take(vec.size() / 2))
    {
        if (x != y)
            return false;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        bool temp = false;

        for (int i : views::iota(2, 65))
        {
            temp = go(i);

            if (temp == true)
                break;
        }

        if (temp == true)
        {
            println("1");
        }
        else
        {
            println("0");
        }
    }

    return 0;
}
