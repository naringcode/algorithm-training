#include <bits/stdc++.h>

using namespace std;

// 최초 -> 왼쪽 + 중간 + 오른쪽 -> 반복

int n;

vector<string> res;

void go(int r)
{
    if (r == n)
        return;

    // 왼쪽 삼각형
    for (int i = 0; i < r; i++)
    {
        res[r + i] += res[i];
    }

    // 중간 삼각형
    for (int i = 0; i < r; i++)
    {
        for (char ch : res[r - i - 1])
        {
            res[r + i] += ' ';
        }

        // res[r + i] += res[r - i - 1];
    }

    // 오른쪽 삼각형
    for (int i = 0; i < r; i++)
    {
        res[r + i] += res[i];
    }

    go(r * 2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    res.resize(n);

    // 최초는 미리 만들어 두자(DP 같은 느낌?)
    res[0] =   "*";
    res[1] =  "* *";
    res[2] = "*****";

    go(3);

    // https://www.acmicpc.net/board/view/26520
    // https://www.acmicpc.net/board/view/26520
    // https://www.acmicpc.net/board/view/26520
    for (int i = 0; i < n; i++)
    {
        string str = "";

        int spacing = n - i - 1;

        for (int j = 0; j < spacing; j++)
        {
            // cout << '-';
            // cout << ' ';

            str += ' ';
        }

        // cout << res[i] << '\n';

        str += res[i];

        for (int j = 0; j < spacing; j++)
        {
            str += ' ';
        }

        cout << str << '\n';
    }

    return 0;
}
