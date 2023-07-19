#include <bits/stdc++.h>

#define left  lleefftt
#define right rriigghhtt

using namespace std;

int n;

int left;
int right;

vector<pair<int, int>> vec;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> left >> right;

        vec.push_back({ left, right });
    }

    sort(vec.begin(), vec.end());

    left  = vec[0].first;
    right = vec[0].second;

    for (int i = 1; i < n; i++)
    {
        if (right >= vec[i].first) // 걸친 상태
        {
            right = max(right, vec[i].second);
        }
        else // 끊긴 상태
        {
            res += right - left;

            left  = vec[i].first;
            right = vec[i].second;
        }
    }

    res += right - left;

    cout << res;

    return 0;
}