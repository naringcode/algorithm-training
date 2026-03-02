#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int arr[250'004];

int step = 1;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i : views::iota(0, n))
    {
        cin >> arr[i];
    }

    for (int i : views::iota(0, n))
    {
        if (arr[i] == step)
        {
            step++;

            continue;
        }

        res++;
    }

    println("{}", res);
    
    return 0;
}
