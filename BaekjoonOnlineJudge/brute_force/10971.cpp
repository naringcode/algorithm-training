#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int n;

int arr[14][14];
int order[14];

int res = 999'999'999;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, n)))
    {
        cin >> arr[y][x];
    }

    ranges::iota(order, 0);

    do
    {
        int cost = 0;

        // 도시를 순회하고 본래 자신의 도시로 돌아오는 것도 포함해야 한다.
        for (int idx : views::iota(0, n))
        {
            int nextIdx = (idx + 1) % n;

            // 갈 수 없는 경로도 있을 수 있다고 문제에 명시되어 있다.
            if (arr[order[idx]][order[nextIdx]] == 0)
            {
                cost = 999'999'999;

                break;
            }

            cost += arr[order[idx]][order[nextIdx]];
        }

        res = min(res, cost);

    } while (next_permutation(order, order + n));
    
    println("{}", res);

    return 0;
}
