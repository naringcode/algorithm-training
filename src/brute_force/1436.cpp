#include <bits/stdc++.h>

using namespace std;

long long n;

long long res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    int idx = 665;
    while (idx++)
    {
        for (int chk = idx; chk >= 666; chk /= 10)
        {
            // cout << chk;

            if (666 == (chk % 1000))
            {
                n--;

                if (0 == n)
                {
                    cout << idx;

                    return 0;
                }

                break; // 이거 빼먹어서 30분 날림 실화?
            }
        }
    }
    
    return 0;
}
