#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int k;

int arr[14];

set<string> mySet;

void permu(int n, int r, int depth)
{
    if (r == depth)
    {
        string str = "";

        for (int i = 0; i < r; i++)
        {
            str += to_string(arr[i]);
        }

        mySet.insert(str);

        return;
    }

    for (int i = depth; i < n; i++)
    {
        swap(arr[i], arr[depth]);

        permu(n, r, depth + 1);
        
        swap(arr[i], arr[depth]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   
    cin >> n;
    cin >> k;

    for (int i : views::iota(0, n))
    {
        cin >> arr[i];
    }

    permu(n, k, 0);

    println("{}", mySet.size());

    return 0;
}
