#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int n;
int m;

bool arr[204][204];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a;
        int b;
        cin >> a >> b;

        arr[a][b] = true;
        arr[b][a] = true;
    }

    // 3개의 아이스크림을 선택
    for (int i : views::iota(1, n + 1))
    {
        for (int j : views::iota(i + 1, n + 1))
        {
            for (int k : views::iota(j + 1, n + 1))
            {
                if (arr[i][j] || arr[i][k] || arr[j][k])
                    continue;

                res++;
            }
        }
    }
    
    println("{}", res);

    return 0;
}
