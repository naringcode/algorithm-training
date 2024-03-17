#include <bits/stdc++.h>

using namespace std;

int n;
int arr[1004][5];
int stuChk[1004][1004]; // 학생과 학생 매핑

int mx  = -1;
int res = -1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            cin >> arr[y][x];
        }
    }

    // 학년 단위로 체크
    for (int x = 0; x < 5; x++)
    {
        for (int ay = 0; ay < n; ay++)
        {
            for (int by = ay + 1; by < n; by++)
            {
                if (arr[ay][x] == arr[by][x])
                {
                    stuChk[ay][by] = true;
                    stuChk[by][ay] = true;
                }
            }
        }
    }

    // for (int y = 0; y < n; y++)
    // {
    //     for (int ax = 0; ax < 5; ax++)
    //     {
    //         for (int bx = ax + 1; bx < 5; bx++)
    //         {
    //             if (arr[y][ax] == arr[y][bx])
    //             {
    //                 stuChk[ax][bx] = true;
    //                 stuChk[bx][ax] = true;
    //             }
    //         }
    //     }
    // }

    for (int y = 0; y < n; y++)
    {
        int cnt = 0;

        for (int x = 0; x < n; x++)
        {
            if (true == stuChk[y][x])
            {
                cnt++;
            }
        }

        if (cnt > mx)
        {
            mx = cnt;

            res = y;
        
            // cout << res + 1 << " : " << mx << '\n';
        }
    }

    cout << res + 1;

    return 0;
}
