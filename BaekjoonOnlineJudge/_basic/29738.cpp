#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int n;

string rnd;
int cnt = 0;

int main()
{
    cin >> t;

    while (t--)
    {
        cnt++;
        cin >> n;

        if (n <= 25)
        {
            rnd = "World Finals";
        }
        else if (n <= 1000)
        {
            rnd = "Round 3";
        }
        else if (n <= 4500)
        {
            rnd = "Round 2";
        }
        else
        {
            rnd = "Round 1";
        }

        println("Case #{}: {}", cnt, rnd);
    }

    return 0;
}
