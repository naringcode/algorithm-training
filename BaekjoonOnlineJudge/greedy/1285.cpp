#include <bits/stdc++.h>

using namespace std;

int n;

int arr[24][24];

// int cnt;

int res = 999'999'999;

// 찐 완탐으로 가면 시간초과 남(2^20 * 2^20)
// 그리디하게 하는 방법 최적해...
// 행이나 열이 뒷면(T) < 앞면(H)일 때는 안 뒤집어도 되지 않을까?
//
// 행 뒤집기 -> 모든 열에서 최적해 탐색 후 누적 -> 반복
//
// 행 뒤집는 건 비트 마스킹을 써서 모든 경우의 수를 계산한다.
// 열에선 최적해를 찾으면 되니까 안 뒤집어도 됨.

int get_optimal(int col)
{
    int ret = 0;

    for (int y = 0; y < n; y++)
    {
        ret += arr[y][col]; // 앞면 누적

        // cnt++;
    }

    // 뒤집었을 때, 뒤집지 않았을 때 중 최소로 나오는 것을 반환
    // 어차피 : 뒷면의 개수 = n - 앞면의 개수
    return min(ret, n - ret);
}

void flip_row(int row)
{
    for (int i = 0; i < n; i++)
    {
        arr[row][i] = !arr[row][i];

        // cnt++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            char ch;
            cin >> ch;

            arr[y][x] = ('H' == ch); // 앞면 1, 뒷면 0
        }
    }

    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;

        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                flip_row(j);
            }
        }

        for (int j = 0; j < n; j++)
        {
            sum += get_optimal(j);
        }

        res = min(res, sum);

        // 원상 복구
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                flip_row(j);
            }
        }
    }

    // cout << cnt << '\n';

    cout << res;

    return 0;
}