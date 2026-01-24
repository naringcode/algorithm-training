#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

vector<char> vec;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    n *= 2;

    while (n--)
    {
        char temp;
        cin >> temp;

        vec.push_back(temp);
    }

    for (auto [a, b] : views::zip(vec, vec | views::drop(ssize(vec) / 2)))
    {
        if (a == b)
        {
            res++;
        }
    }

    println("{}", res);
    
    return 0;
}
