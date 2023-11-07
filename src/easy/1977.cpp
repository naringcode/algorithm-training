#include <bits/stdc++.h>

using namespace std;

int n;
int m;

vector<int> vec;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    int num = 1;

    while (true)
    {
        int temp = num * num;
        num++;

        if (temp < n)
            continue;

        if (temp <= m)
        {
            vec.push_back(temp);

            continue;
        }

        break;
    }

    if (true == vec.empty())
    {
        cout << -1;
    }
    else
    {
        res = std::accumulate(vec.begin(), vec.end(), 0);

        cout << res << '\n' << vec[0];
    }

    return 0;
}
