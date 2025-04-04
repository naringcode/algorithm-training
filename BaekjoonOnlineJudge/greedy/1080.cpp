#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

char arr1[54][54];
char arr2[54][54];

int res;

void flip(int y, int x)
{
    res++;
    
    for (auto [y, x] : views::cartesian_product(views::iota(y, y + 3), views::iota(x, x + 3)))
    {
        if (arr1[y][x] == '0')
        {
            arr1[y][x] = '1';
        }
        else
        {
            arr1[y][x] = '0';
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, m)))
    {
        cin >> arr1[y][x];
    }
    
    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, m)))
    {
        cin >> arr2[y][x];
    }
    
    for (auto [y, x] : views::cartesian_product(views::iota(0, max(0, n - 2)), views::iota(0, max(0, m - 2))))
    {
        if (arr1[y][x] != arr2[y][x])
        {
            flip(y, x);
        }
    }

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, m)))
    {
        if (arr1[y][x] != arr2[y][x])
        {
            println("-1");

            return 0;
        }
    }

    println("{}", res);

    return 0;
}
