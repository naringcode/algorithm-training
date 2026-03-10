#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> b;

    int temp = b * 5 - 400;
    
    println("{}", temp);

    if (temp < 100)
    {
        println("1");
    }
    else if (temp == 100)
    {
        println("0");
    }
    else
    {
        println("-1");
    }
    
    return 0;
}
