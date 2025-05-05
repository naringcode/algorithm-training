#include <bits/stdc++.h>

using namespace std;

int n;
int arr[104];

vector<int> vec;

int main()
{
    cin >> n;
    
    for (int i : views::iota(0, n))
    {
        cin >> arr[i];
    }

    for (auto [x, y] : views::zip(views::iota(0, n), views::iota(1, n)))
    {
        vec.push_back(abs(arr[y] - arr[x]));
    }

    ranges::sort(vec);

    for (auto [x, y] : views::zip(vec, vec | views::drop(1)))
    {
        if (y - x != 1)
        {
            println("NO");

            return 0;
        }
    }

    println("YES");

    return 0;
}
