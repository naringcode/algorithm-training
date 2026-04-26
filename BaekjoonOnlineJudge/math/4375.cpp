#include <bits/stdc++.h>

using namespace std;

long long n;

long long piv;
long long cnt;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);

    while (cin >> n)
    {
        piv = 1;
        cnt = 1;

        // piv % n
        // (piv * 10 + 1) % n
        // (piv % n * 10 % n + 1) % n
        // 최종 결과만 놓고 보면 곱셈과 덧셈이 연속되어 있다.
        // 모듈러 공식 적용 가능.
        while (piv % n != 0)
        {
            // piv = piv % n * 10 % n + 1;
            piv = (piv * 10 + 1) % n;

            cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}
