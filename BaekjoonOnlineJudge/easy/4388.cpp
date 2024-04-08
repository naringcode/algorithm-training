#include <bits/stdc++.h>

using namespace std;

string strA;
string strB;

int arr[14];
int arrPivot = 13;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    while (true)
    {
        cin >> strA >> strB;

        if ("0" == strA && "0" == strB)
            break;

        memset(arr, 0x00, sizeof(arr));

        for (int idx = 0; idx < strA.length(); idx++)
        {
            arr[arrPivot - idx] += strA[strA.length() - idx - 1] - '0';
        }

        for (int idx = 0; idx < strB.length(); idx++)
        {
            arr[arrPivot - idx] += strB[strB.length() - idx - 1] - '0';
        }

        res = 0;

        for (int idx = arrPivot; idx > 0; idx--)
        {
            if (arr[idx] >= 10)
            {
                arr[idx - 1]++;

                res++;
            }
        }
        
        cout << res << '\n';
    }
    
    return 0;
}
