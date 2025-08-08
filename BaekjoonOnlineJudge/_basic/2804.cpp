#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string strA;
string strB;

int idxA;
int idxB;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> strA >> strB;

    for (idxA = 0; idxA < strA.size(); idxA++)
    {
        for (idxB = 0; idxB < strB.size(); idxB++)
        {
            if (strA[idxA] == strB[idxB])
                break;
        }

        if (idxB != strB.size())
            break;
    }

    for (auto [y, x] : views::cartesian_product(views::iota(0, ssize(strB)), views::iota(0, ssize(strA) + 1)))
    {
        if (x == strA.size())
        {
            println("");

            continue;
        }

        if (x == idxA)
        {
            print("{}", strB[y]);
        }
        else if (y == idxB)
        {
            print("{}", strA[x]);
        }
        else
        {
            print(".");
        }
    }

    return 0;
}
