#include <bits/stdc++.h>

using namespace std;

vector<int> vec;

int gcd(int a, int b)
{
    if (0 == a)
        return b;

    return gcd(b % a, a);
}

int n;

int gcdv = 100'000'000;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    vec.resize(n);

    for (int& elem : vec)
    {
        cin >> elem;
    }

    n = vec[0];

    for (int& elem : vec)
    {
        elem -= n;
    }

    vec.erase(vec.begin());

    for (int i = 1; i < vec.size(); i++)
    {
        gcdv = min(gcdv, gcd(vec[0], vec[i]));
    }

    n = 0;
    
    for (int i = gcdv; i != vec.back(); i += gcdv)
    {
        if (i == vec[n])
        {
            n++;
        }
        else
        {
            res++;
        }
    }

    cout << res;

    return 0;
}
