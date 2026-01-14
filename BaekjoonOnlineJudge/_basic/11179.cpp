#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;

vector<int> numVec;

ll res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n != 0)
    {
        if (n % 2 == 0)
        {
            numVec.push_back(0);
        }
        else
        {
            numVec.push_back(1);
        }

        n /= 2;
    }

    ranges::reverse(numVec);

    int curr = 1;
    for (int num : numVec)
    {
        res += curr * num;

        curr *= 2;
    }

    println("{}", res);

    return 0;
}
