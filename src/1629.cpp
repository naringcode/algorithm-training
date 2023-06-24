#include <bits/stdc++.h>

using namespace std;

long long a, b, c;

long long div_con(long long a, long long b, long long c)
{
    long long ret;

    if (1 == b)
        return a % c;

    ret = div_con(a, b / 2, c);

    // 분할 정복으로 구한 값을 계승(?)한다.
    ret = (ret * ret) % c;

    // 홀수에서 1을 빼면 짝수라는 것을 연상.
    // b / 2로 처리되지 않는 부분은 따로 계산해줘야 한다.
    if (1 == b % 2)
    {
        /*
         *       15 --> 여기도
         *      /  \
         *     7    7 --> 마찬가지
         *    / \
         *   3   3 --> 처리되지 않은 곱셈은 수동으로 계산
         *  / \
         * 1   1
         */
        ret = (ret * a) % c;
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c;

    cout << div_con(a, b, c);

    return 0;
}
