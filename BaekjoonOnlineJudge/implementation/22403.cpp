#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

string str;
int cnt;

bool res = true;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> str;

        if (str == "A")
        {
            cnt++;
        }
        else if (str == "Un")
        {
            cnt--;

            if (cnt < 0)
            {
                res = false;
            }
        }
    }

    if (cnt > 0)
    {
        res = false;
    }

    if (res == true)
    {
        println("YES");
    }
    else
    {
        println("NO");
    }
    
    return 0;
}
