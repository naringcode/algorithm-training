#include <bits/stdc++.h>

using namespace std;

int n;
int temp;

vector<pair<int, int>> vec;

int digit_sum(int x)
{
    int ret = 0;

    while (0 != x)
    {
        ret += x % 10;

        x /= 10;
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;

        vec.push_back({ digit_sum(temp), temp });
    }
    
    sort(vec.begin(), vec.end(), greater());

    cout << vec[0].second;

    return 0;
}
