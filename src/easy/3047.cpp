#include <bits/stdc++.h>

using namespace std;

int  arrN[3];
char arrCh[3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 3; i++)
    {
        cin >> arrN[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cin >> arrCh[i];
    }

    sort(arrN, arrN + 3);

    for (int i = 0; i < 3; i++)
    {
        // cout << int(arrCh[i] -'A') << ' ';

        cout << arrN[arrCh[i] - 'A'] << ' ';
    }

    return 0;
}
