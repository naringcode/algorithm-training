#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

int arrA[1'000'004];
int arrB[1'000'004];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;

        res = 0;
    
        for (int idx : views::iota(0, n))
        {
            cin >> arrA[idx];
        }
        
        for (int idx : views::iota(0, n))
        {
            cin >> arrB[idx];
        }
    
        int i = 0;
        int j = 0;
        while (i < n && j < m)
        {
            if (arrA[i] == arrB[j])
            {
                i++;
                j++;
                res++;
            }
            else if (arrA[i] < arrB[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }

        println("{}", res);
    }

    return 0;
}
