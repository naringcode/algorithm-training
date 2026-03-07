#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int a;
int b;

int arr[1004][1004];

bool res = true;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> a >> b;
    a--;
    b--;

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, n)))
    {
        cin >> arr[y][x];
    }

    for (int x : views::iota(0, n))
    {
        if (arr[a][x] > arr[a][b])
        {
            res = false;

            break;
        }
    }
    
    for (int y : views::iota(0, n))
    {
        if (arr[y][b] > arr[a][b])
        {
            res = false;

            break;
        }
    }

    println("{}", res ? "HAPPY" : "ANGRY");
    
    return 0;
}
