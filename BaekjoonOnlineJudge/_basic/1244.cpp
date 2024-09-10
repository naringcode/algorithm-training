#include <bits/stdc++.h>

using namespace std;

int n;
int arr[104];

int t;
int x;
int y;

void go(int x, int y)
{
    if (1 == x)
    {
        for (int i = y; i <= n; i += y)
        {
            arr[i] = !arr[i];
        }
    }
    else if (2 == x)
    {
        int l = y - 1;
        int r = y + 1;

        while (l >= 1 && r <= n)
        {
            if (arr[l] != arr[r])
                break;

            arr[l] = !arr[l];
            arr[r] = !arr[r];

            l--;
            r++;
        }

        arr[y] = !arr[y];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    cin >> t;
    while (t--)
    {
        cin >> x >> y;

        go(x, y);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ';

        if (0 == i % 20)
        {
            cout << '\n';
        }
    }

    return 0;
}
