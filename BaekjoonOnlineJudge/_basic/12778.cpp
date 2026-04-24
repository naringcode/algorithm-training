#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;

int m;
char type;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> m >> type;

        if (type == 'C')
        {
            for (auto _ : views::iota(0, m))
            {
                char temp;
                cin >> temp;

                print("{} ", temp - 'A' + 1);
            }
        }
        else if (type == 'N')
        {
            for (auto _ : views::iota(0, m))
            {
                int temp;
                cin >> temp;

                print("{} ", (char)(temp + 'A' - 1));
            }
        }

        println("");
    }

    return 0;
}
