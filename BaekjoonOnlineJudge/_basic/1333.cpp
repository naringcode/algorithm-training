#include <bits/stdc++.h>

using namespace std;

int n;
int l;
int d;

vector<bool> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> l >> d;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            vec.push_back(false);
        }

        for (int j = 0; j < 5; j++)
        {
            vec.push_back(true);
        }
    }

    for (int i = 0; i < d; i++)
    {
        vec.push_back(true);
    }

    int idx;
    for (idx = 0; idx < vec.size(); idx += d)
    {
        if (true == vec[idx])
            break;
    }

    cout << idx;

    return 0;
}
