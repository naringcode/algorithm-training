#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int k;
int l;

int x1;
int x2;
int x3;

vector<int> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k >> l;

    while (n--)
    {
        cin >> x1 >> x2 >> x3;

        if (x1 < l || x2 < l || x3 < l)
            continue;

        if (x1 + x2 + x3 < k)
            continue;

        vec.push_back(x1);
        vec.push_back(x2);
        vec.push_back(x3);
    }

    println("{}", vec.size() / 3);

    for (int elem : vec)
    {
        print("{} ", elem);
    }

    return 0;
}
