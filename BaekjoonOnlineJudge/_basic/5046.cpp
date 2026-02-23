#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int b;
int h;
int w;

int p;
int a;

int res = 999'999'999;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> b >> h >> w;

    for (int i : views::iota(0, h))
    {
        cin >> p;
        
        int temp = n * p;

        for (int j : views::iota(0, w))
        {
            cin >> a;

            if (a >= n && n * p <= b)
            {
                res = min(res, temp);
            }
        }
    }

    if (res == 999'999'999)
    {
        println("stay home");
    }
    else
    {
        println("{}", res);
    }
    
    return 0;
}
