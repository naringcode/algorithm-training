#include <bits/stdc++.h>

using namespace std;

int n;
int temp;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n; // n은 홀수

    while (n--)
    {
        cin >> temp;

        if (0 == temp)
        {
            res--;
        }
        else
        {
            res++;
        }
    }

    cout << ((res < 0) ? "Junhee is not cute!" : "Junhee is cute!");

    return 0;
}
