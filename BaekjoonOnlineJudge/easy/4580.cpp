#include <bits/stdc++.h>

using namespace std;

int k;
int n;

vector<int> vec;
vector<int> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> k;

        if (0 == k)
            break;

        vec.clear();
        res.clear();

        for (int i = 0; i < k; i++)
        {
            cin >> n;

            vec.push_back(n);
        }

        for (int i = 0; i < vec[0]; i++)
        {
            res.push_back(1);
        }

        for (int i = 1; i < vec.size(); i++)
        {
            for (int j = vec[i] - vec[i - 1]; j > 0; j--)
            {
                res.push_back(i + 1);
            }
        }

        for (auto elem : res)
        {
            cout << elem << ' ';
        }

        cout << '\n';
    }

    return 0;
}
