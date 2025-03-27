#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

vector<int> vec;

vector<int> res;
int mx;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        vec.clear();

        vec.push_back(n);
        vec.push_back(i);
        vec.push_back(n - i);

        while (true)
        {
            int backIdx = vec.size() - 1;
            int newNum  = vec[backIdx - 1] - vec[backIdx];

            if (newNum < 0)
                break;

            vec.push_back(newNum);
        }

        if (vec.size() > mx)
        {
            res = vec;
            mx  = vec.size();
        }
    }

    println("{}", mx);

    for (int elem : res)
    {
        print("{} ", elem);
    }

    return 0;
}
