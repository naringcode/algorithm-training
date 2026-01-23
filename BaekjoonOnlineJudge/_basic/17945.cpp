#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a;
int b;

int res1;
int res2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> a >> b;

    a *= 2;

    for (int i : views::iota(1, abs(b) + 1))
    {
        if (b % i != 0)
            continue;
        
        int temp1 = i;
        int temp2 = b / i;

        if (a == temp1 + temp2)
        {
            res1 = -temp1;
            res2 = -temp2;

            break;
        }
    }

    if (res1 == 0)
    {
        res1 = -a;
    }

    if (res1 == res2)
    {
        println("{}", res1);
    }
    else
    {
        if (res1 > res2)
        {
            swap(res1, res2);
        }

        println("{} {}", res1, res2);
    }

    return 0;
}
