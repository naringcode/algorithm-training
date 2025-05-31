#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    println("int a;");

    if (n >= 1)
    {
        println("int *ptr = &a;");
    }
    
    if (n >= 2)
    {
        println("int **ptr2 = &ptr;");
    }
    
    if (n >= 3)
    {
        for (int cnt : views::iota(3, n + 1))
        {
            println("int {:*>{}}{} = &ptr{};", "ptr", cnt + 3, cnt, cnt - 1);
        }
    }

    return 0;
}
