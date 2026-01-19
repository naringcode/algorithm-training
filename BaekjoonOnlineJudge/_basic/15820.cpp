#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int s1;
int s2;

int res1;
int res2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> s1 >> s2;

    for (int i : views::iota(0, s1))
    {
        int a;
        int b;
        cin >> a >> b;

        if (a == b)
        {
            res1++;
        }
        else
        {
            res1--;
        }
    }

    for (int i : views::iota(0, s2))
    {
        int a;
        int b;
        cin >> a >> b;

        if (a == b)
        {
            res2++;
        }
        else
        {
            res2--;
        }
    }

    if (res1 == s1)
    {
        if (res2 == s2)
        {
            println("Accepted");
        }
        else
        {
            println("Why Wrong!!!");
        }
    }
    else
    {
        println("Wrong Answer");
    }

    return 0;
}
