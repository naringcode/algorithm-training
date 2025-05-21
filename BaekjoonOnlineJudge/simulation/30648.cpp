#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int x;
int y;
int r;

int arr[1004][1004];
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> x >> y >> r;

    while (true)
    {
        arr[y][x]++;
        
        if (arr[y][x] == 2)
            break;
        
        res++;
        
        if ((x + 1) + (y + 1) < r)
        {
            x++;
            y++;
        }
        else
        {
            x /= 2;
            y /= 2;
        }
    }

    println("{}", res);
    
    return 0;
}
