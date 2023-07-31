#include <bits/stdc++.h>

using namespace std;

constexpr int INF = 999'999'999;

int n;

// from, to
int arr[20][20];

// visitedBits, from
int dp[140'000][20];

// vector<int> vec;

// 기저 : 모든 도시 탐색 완료
// 메모 : 현재 경로 중 최솟값
// 로직 : 아직 탐색하지 않은 도시 탐색
// 초기화 : -1

// 어떻게 순회하든 최초 도시를 방문해야 하기 때문에 시작 순서는 상관 없다.
// 처음부터 활성화되어 있는 비트를 최초 go()를 호출할 때 넘기기

int go(int visitedBits, int from)
{
    if (visitedBits == ((1 << n) - 1))
    {
        if (0 == arr[from][0])
            return INF;

        return arr[from][0];
    }

    int& ret = dp[visitedBits][from];

    if (-1 != ret)
        return ret;

    ret = INF;

    for (int i = 1; i < n; i++)
    {
        if (visitedBits & (1 << i))
            continue;

        if (0 == arr[from][i])
            continue;

        // vec.push_back(i);

        // for (auto elem : vec)
        // {
        //     cout << elem << ' ';
        // }

        // cout << ": " << arr[from][i] << '\n';

        ret = min(ret, arr[from][i] + go(visitedBits | (1 << i), i));

        // vec.pop_back();
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    fill(&dp[0][0], &dp[0][0] + 140'000 * 20, -1);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    // 첫 번째에서 시작한다고 가정
    // vec.push_back(0);

    cout << go(1, 0);

    return 0;
}