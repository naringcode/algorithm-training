#include <bits/stdc++.h>

using namespace std;

int src;
int dst;

int c;
int d;
int e;

int res;

int main()
{
    cin >> src >> dst >> c >> d >> e;

    if (src > 0)
    {
        res -= e;
    }

    while (src <= dst)
    {
        if (src < 0)
        {
            res += c;
            src++;
        }
        else if (0 == src)
        {
            res += d;
            src++;
        }
        else
        {
            res += e;
            src++;
        }
    }

    cout << res;
    
    return 0;
}
