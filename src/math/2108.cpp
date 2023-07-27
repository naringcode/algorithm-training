#include <bits/stdc++.h>

using namespace std;

int n;
int arr[500'004];
int cnt[8'004];

double sum;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        sum += double(arr[i]);

        cnt[arr[i] + 4000]++;
    }

    sort(arr, arr + n);

    // 산술 평균
    cout << int(round((sum + 0.00001) / n)) << '\n';
    
    // 중앙값
    cout << arr[n / 2] << '\n';
    
    // 최빈값 2번째
    vector<pair<int, int>> vec;

    for (int i = 0; i < 8004; i++)
    {
        if (0 == cnt[i])
            continue;

        vec.push_back({ cnt[i], i - 4000 });
    }

    sort(vec.begin(), vec.end());

    vector<int> res;

    for (auto& pair : vec)
    {
        if (pair.first == vec.back().first)
        {
            res.push_back(pair.second);
        }
    }

    sort(res.begin(), res.end());

    if (1 == res.size())
    {
        cout << res[0] << '\n';
    }
    else
    {
        cout << res[1] << '\n';
    }
    
    // 범위
    cout << arr[n - 1] - arr[0] << '\n';

    return 0;
}