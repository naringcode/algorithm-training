#include <bits/stdc++.h>

using namespace std;

// 1. 다리를 놓고 + 놓지 않고 / 놓은 경우에는 원상복구
// 2. 경우의 수 조합 완료 -> 탐색 시작
// 3. 모든 i번째의 최종 탐색이 i라면 결과를 최소와 비교해서 저장

// 가로 -> 끝 도달 -> 세로 다음 칸 + 가로 처음 -> 반복

// 세로 줄 수 : x의 개수
// 가로 줄 수 : y의 개수
// 행렬을 떠올리자.

// 간선은 가로로만 놓인다(세로 간선은 없다).

// 틀렸네?
// 입력을 이상하게 줄 것이라는 발상을 애초에 제외시키자.
// 예외처리 시키지 말고 그냥 로직으로만 판단해 보자...
// -> 내가 가로선의 정보 a에 대해서 잘못 생각했다(내 실수)
// -> 가로로 놓으니 가로는 예외처리를 해도 되지만 세로는 사다리를 생성하는 부근이 아니라서 그냥 지나쳤어야 한다.

int arr[34][14];

int n;
int m;
int h;

int a;
int b;

// bool flag;
int res = 999'999'999;

// vector<pair<int, int>> trace;

bool check(int x)
{
    int oriX = x;
    int mx   = x;

    for (int y = 0; y < h; y++)
    {
        if (-1 != arr[y][mx])
        {
            mx = arr[y][mx];
        }
    }

    return oriX == mx;
}

void go(int y, int x, int edges)
{
    // cout << x << ' ' << y << '\n';

    if (4 == edges || edges >= res) // 가지치기 백트래킹!
        return;

    if (y == h)
    {
        // return;

        for (int idx = 0; idx < n; idx++)
        {
            if (false == check(idx))
                return;
        }

        res = min(res, edges);

        return;
    }

    int nx = (x + 1) % (n - 1);
    int ny = (nx == 0) ? y + 1 : y;

    if (-1 == arr[y][x] && -1 == arr[y][x + 1])
    {
        arr[y][x] = x + 1;
        arr[y][x + 1] = x;

        // trace.push_back({ y + 1, x + 1 });

        go(ny, nx, edges + 1);

        // trace.pop_back();
        
        arr[y][x] = -1;
        arr[y][x + 1] = -1;
    }

    go(ny, nx, edges);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    memset(arr, -1, sizeof(arr));

    cin >> n >> m >> h;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;

        // a--;
        // b--;
        //
        // if (a < 0 || b < 0 || (a + 1) >= h || (b + 1) >= n) // height, width
        // {
        //     flag = true;
        //
        //     continue;
        // }

        a--;
        b--;

        arr[a][b] = b + 1;
        arr[a][b + 1] = b;
    }

    go(0, 0, 0);

    if (res > 3)
    {
        cout << -1;
    }
    else
    {
        cout << res;
    }

    // if (false == flag)
    // {
    //     go(0, 0, 0);
    //
    //     if (res <= 3)
    //     {
    //         cout << res;
    //     }
    //     else
    //     {
    //         cout << -1;
    //     }
    // }
    // else
    // {
    //     cout << -1;
    // }

    return 0;
}
