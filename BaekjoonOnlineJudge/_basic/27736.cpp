#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int chan;
int ban;
int gi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    
    for (int i : views::iota(0, n))
    {
        int temp;
        cin >> temp;

        if (temp == 1)
        {
            chan++;
        }
        else if (temp == -1)
        {
            ban++;
        }
        else if (temp == 0)
        {
            gi++;
        }
    }

    if (gi * 2 >= n)
    {
        println("INVALID");
    }
    else if (chan > ban)
    {
        println("APPROVED");
    }
    else
    {
        println("REJECTED");
    }

    return 0;
}
