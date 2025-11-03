#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

string str;

int ioiCnt;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> m;
    cin >> str;
    
    int idx = 0;
    
    while (idx < m - 2)
    {
        if (str[idx] == 'I' && str[idx + 1] == 'O' && str[idx + 2] == 'I')
        {
            ioiCnt++;

            if (ioiCnt == n)
            {
                res++;
                ioiCnt--;
            }

            idx += 2;
        }
        else
        {
            ioiCnt = 0;
            idx++;
        }
    }

    println("{}", res);

    return 0;
}
