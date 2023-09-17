#include <bits/stdc++.h>

using namespace std;

int num;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 5; i++)
    {
        cin >> num;

        if  (num < 40)
        {
            num = 40;
        }

        res += num;
    }

    res /= 5;

    cout << res;

    return 0;
}