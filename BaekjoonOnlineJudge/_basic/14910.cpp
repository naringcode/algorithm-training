#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector<int> vec;
int temp;

bool res = true;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (cin >> temp)
    {
        vec.push_back(temp);
    }

    for (auto [lhs, rhs] : views::zip(vec, vec | views::drop(1)))
    {
        if (lhs > rhs)
        {
            res = false;

            break;
        }
    }

    if (res == true)
    {
        println("Good");
    }
    else
    {
        println("Bad");
    }

    return 0;
}
