#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int c;
int r;

int t;

int n;
int m;

vector<int> sliceA;
vector<int> sliceB;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> c >> r;
    cin >> t;

    sliceA.push_back(0);
    sliceB.push_back(0);

    sliceA.push_back(r);
    sliceB.push_back(c);

    while (t--)
    {
        cin >> n >> m;

        if (n == 0)
        {
            sliceA.push_back(m);
        }
        else
        {
            sliceB.push_back(m);
        }
    }

    ranges::sort(sliceA);
    ranges::sort(sliceB);

    auto view1 = views::zip_transform(std::minus{ }, views::drop(sliceA, 1), sliceA);
    auto view2 = views::zip_transform(std::minus{ }, views::drop(sliceB, 1), sliceB);

    auto res = ranges::max(view1) * ranges::max(view2);

    println("{}", res);

    return 0;
}
