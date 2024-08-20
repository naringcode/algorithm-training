#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> vec;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        vec.push_back(i + 1);
    }

    while (n > 0)
    {
        res = vec[0];

        vector<int> temp;

        for (int i = 1; i < n; i += 2)
        {
            temp.push_back(vec[i]);
        }

        vec = temp;

        n = vec.size();

    }

    cout << res;

    return 0;
}
