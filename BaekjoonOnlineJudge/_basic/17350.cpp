#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
string str;

bool res = false;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> str;

        if (str == "anj")
        {
            res = true;
        }
    }

    if (res == true)
    {
        println("뭐야;");
    }
    else
    {
        println("뭐야?");
    }
    
    return 0;
}
