#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[3]{ -1, -1, -1 };
const int dx[3]{ -1, 0, 1 };

int n;
int l;

int d; // 위치
int r; // 빨
int g; // 녹

int prevD;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> l;

    for (int i : views::iota(0, n))
    {
        cin >> d >> r >> g;

        res += d - prevD;
        prevD = d;

        int temp = res % (r + g);

        if (temp < r)
        {
            res += r - temp;
        }
    }

    res += l - prevD;

    println("{}", res);

    return 0;
}
