#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

string strA;
string strB;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> strA;
    cin >> strB;

    if (n % 2 == 0)
    {
        for (int idx : views::iota(0, ssize(strA)))
        {
            if (strA[idx] != strB[idx])
            {
                println("Deletion failed");

                return 0;
            }
        }
        
        println("Deletion succeeded");
    }
    else // if (n % 2 == 1)
    {
        for (int idx : views::iota(0, ssize(strA)))
        {
            if (strA[idx] == strB[idx])
            {
                println("Deletion failed");

                return 0;
            }
        }
        
        println("Deletion succeeded");
    }

    return 0;
}
