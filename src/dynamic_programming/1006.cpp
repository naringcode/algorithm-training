#include <bits/stdc++.h>

using namespace std;

constexpr int INF = 999'999'999;

int t;

int n;
int w;

int arr[2][10004];

int top[10004];
int bottom[10004];
int both[10004];

int res;

/*
 이전 상태를 결정하고 가야 한다(외부에서).
 미래의 상태는 현재 상태를 기반으로 누적하면서 간다.

 both (idx : 2)
 O O
 O O

 top (idx : 2)
 O O O
 O O

 bottom (idx : 2)
 O O
 O O O

 both cases
 1)
 O O => O O + X X
 O O => O X + X O : both[idx + 1] = top[idx] + 1
 2)
 O O => O X + X O
 O O => O O + X X : both[idx + 1] = bottom[idx] + 1
 3)
 O O => O X + X O
 O O => O X + X O : both[idx + 1] = both[idx] + 1 
 4)
 ? O O => ? O O + ? X X
 ? O O => ? X X + ? O O : both[idx + 1] = both[idx - 1] + 2

 top cases
 1)
 O O => O X + X O
 O X => O X + X X : top[idx + 1] = both[idx + 1] + 1
 2)
 O O => X X + O O
 O X => O X + X X : top[idx + 1] = bottom[idx] + 1
 
 bottom cases
 1)
 O X => O X + X X
 O O => O X + X O : bottom[idx + 1] = both[idx + 1] + 1
 2)
 O X => O X + X X
 O O => X X + O O : bottom[idx + 1] = top[idx] + 1;
 */

void go(int idx)
{
    while (idx < n)
    {
        both[idx + 1] = min(top[idx] + 1, bottom[idx] + 1);

        if (arr[0][idx] + arr[1][idx] <= w)
        {
            both[idx + 1] = min(both[idx + 1], both[idx] + 1);
        }

        if (idx >= 1)
        {
            if (arr[0][idx - 1] + arr[0][idx] <= w && arr[1][idx - 1] + arr[1][idx] <= w)
            {
                both[idx + 1] = min(both[idx + 1], both[idx - 1] + 2);
            }
        }
        
        top[idx + 1]    = both[idx + 1] + 1;
        bottom[idx + 1] = both[idx + 1] + 1;

        if (arr[0][idx] + arr[0][idx + 1] <= w)
        {
            top[idx + 1] = min(top[idx + 1], bottom[idx] + 1);
        }

        if (arr[1][idx] + arr[1][idx + 1] <= w)
        {
            bottom[idx + 1] = min(bottom[idx + 1], top[idx] + 1);
        }

        idx++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int tt = 0; tt < t; tt++)
    {
        cin >> n >> w;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[0][i];
        }
        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[1][i];
        }

        if (n == 1)
        {
            if (arr[0][0] + arr[1][0] > w)
            {
                cout << 2 << '\n';
            }
            else
            {
                cout << 1 << '\n';
            }

            continue;
        }

        // 정배
        top[0] = 1;
        bottom[0] = 1;
        both[0] = 0;

        go(0);

        res = both[n];

        // 뒤가 연결되어 있다고 가정
        // top
        if (arr[0][0] + arr[0][n - 1] <= w)
        {
            both[1] = 1;
            top[1] = 2;

            if (arr[1][0] + arr[1][1] <= w)
            {
                bottom[1] = 1;
            }
            else
            {
                bottom[1] = 2;
            }

            int temp = arr[0][n - 1];

            arr[0][n - 1] = INF;

            go(1);

            arr[0][n - 1] = temp;

            res = min(res, both[n]);

            // cout << "top\n";
        }

        // bottom
        if (arr[1][0] + arr[1][n - 1] <= w)
        {
            both[1] = 1;
            bottom[1] = 2;

            if (arr[0][0] + arr[0][1] <= w)
            {
                top[1] = 1;
            }
            else
            {
                top[1] = 2;
            }

            int temp = arr[1][n - 1];

            arr[1][n - 1] = INF;

            go(1);

            arr[1][n - 1] = temp;
            
            res = min(res, both[n]);

            // cout << "bottom\n";
        }

        // both
        if (arr[0][0] + arr[0][n - 1] <= w &&
            arr[1][0] + arr[1][n - 1] <= w)
        {
            top[1]  = 1;
            bottom[1] = 1;
            both[1] = 0;
            
            arr[0][n - 1] = INF;
            arr[1][n - 1] = INF;

            go(1);

            res = min(res, both[n]);
            
            // cout << "both\n";
        }

        cout << res << '\n';
    }

    return 0;
}