#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i : views::iota(0, 6))
    {
        char temp;
        cin >> temp;

        if (temp == 'W')
        {
            cnt++;
        }
    }

    if (cnt == 5 || cnt == 6)
    {
        println("1");
    }
    else if (cnt == 3 || cnt == 4)
    {
        println("2");
    }
    else if (cnt == 1 || cnt == 2)
    {
        println("3");
    }
    else
    {
        println("-1");
    }

    return 0;
}
