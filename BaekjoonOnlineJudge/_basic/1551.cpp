#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int k;

string str;
vector<int> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    cin >> str;

    for (auto num : views::split(str, ','))
    {
        vec.push_back(std::atoi(num.data()));
    }
    
    for (int i : views::iota(1, k + 1))
    {
        vector<int> temp;

        for (int idx : views::iota(0, n - i))
        {
            temp.push_back(vec[idx + 1] - vec[idx]);
        }

        vec = std::move(temp);
    }

    for (int idx : views::iota(0, n - k))
    {
        print("{}", vec[idx]);

        if (idx != (n - k - 1))
        {
            print(",");
        }
    }

    return 0;
}
