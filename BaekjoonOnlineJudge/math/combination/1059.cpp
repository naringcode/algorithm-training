#include <bits/stdc++.h>
#include <print>

using namespace std;

using ll = long long;

vector<int> vec;

int l;
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> l;
    vec.resize(l);

    ranges::for_each(vec, [](int& elem){ cin >> elem; });
    vec.push_back(0);

    ranges::sort(vec);

    cin >> n;

    auto lB = ranges::lower_bound(vec, n);
    auto rB = ranges::lower_bound(vec, n);

    if (*lB == n)
    {
        print("0");

        return 0;
    }
    else
    {
        lB--;

        // 숫자의 총합인 줄 알았는데 아님
        // int res = 0;
        // for (int i = *lB + 1; i <= n; i++)
        // {
        //     res += *rB - 1 - i;
        // }

        // 구간의 개수로 구하기
        // -1은 자기 자신의 구간(왼쪽 집합 * 오른쪽 집합 - 자기 자신의 집합)
        int res = (n - *lB) * (*rB - n) - 1;

        print("{}", res);
    }

    return 0;
}
