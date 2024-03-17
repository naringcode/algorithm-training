#include <bits/stdc++.h>

using namespace std;

int N; // 운동 몇 번
int m; // 최소 맥박, 초기 맥박
int M; // 최대 맥박
int T; // 운동 후 맥박
int R; // 휴식 후 감소 맥박

int X;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> m >> M >> T >> R;

    if (m + T > M)
    {
        cout << -1;

        return 0;
    }

    X = m;
    
    for (int cnt = 1; true; cnt++)
    {
        if (X + T <= M)
        {
            X += T;

            res++;
        }
        else
        {
            X -= R;

            X = max(X, m);
        }

        if (res == N)
        {
            cout << cnt;

            return 0;
        }
    }

    return 0;
}