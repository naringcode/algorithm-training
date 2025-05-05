#include <bits/stdc++.h>

using namespace std;

int n;
int arr[100'004];

int curr;
int res;

int main()
{
    cin >> n;

    for (int i : views::iota(0, n))
    {
        cin >> arr[i];
    }

    curr = 1;
    res  = 1;

    for (int i : views::iota(1, n))
    {
        if (arr[i] >= arr[i - 1])
        {
            curr++;

            continue;
        }

        res = max(res, curr);
        curr = 1;
    }
    
    res = max(res, curr);

    println("{}", res);

    return 0;
}
