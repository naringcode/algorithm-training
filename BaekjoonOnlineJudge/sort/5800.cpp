#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int k;

int n;
vector<int> vec;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> k;

    for (int i = 1; i <= k; i++)
    {
        cin >> n;
        vec.resize(n);

        for (int j = 0; j < n; j++)
        {
            cin >> vec[j];
        }

        sort(vec.begin(), vec.end());

        int temp = numeric_limits<int>::min();

        for (int j = 1; j < n; j++)
        {
            temp = max(temp, vec[j] - vec[j - 1]);
        }

        cout << "Class " << i << '\n';
        cout << "Max " << vec.back() << ", Min " << vec.front() << ", Largest gap " << temp << '\n';
    }

    return 0;
}
