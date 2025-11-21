#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;

int a;
int b;

int go1(int rank)
{
    if (rank == 0)
        return 0;

    if (rank == 1)
        return 500;

    if (rank <= 3)
        return 300;

    if (rank <= 6)
        return 200;

    if (rank <= 10)
        return 50;

    if (rank <= 15)
        return 30;

    if (rank <= 21)
        return 10;

    return 0;
}

int go2(int rank)
{
    if (rank == 0)
        return 0;
    
    if (rank == 1)
        return 512;
    
    if (rank <= 3)
        return 256;
    
    if (rank <= 7)
        return 128;
    
    if (rank <= 15)
        return 64;

    if (rank <= 31)
        return 32;

    return 0;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;
   
    while (t--)
    {
        cin >> a >> b;

        println("{}", (go1(a) + go2(b)) * 10000);
    }

    return 0;
}
