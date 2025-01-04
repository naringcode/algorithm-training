#include <bits/stdc++.h>

using namespace std;

int t;
int n;
int arr[1004];

void go(int num)
{
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = i; j <= 1000; j++)
        {
            for (int k = j; k <= 1000; k++)
            {
                if (arr[i] + arr[j] + arr[k] == num)
                {
                    cout << "1\n";

                    return;
                }
            }
        }
    }

    cout << "0\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 1; i <= 1000; i++)
    {
        arr[i] = arr[i - 1] + i;
    }

    cin >> t;

    while (t--)
    {
        cin >> n;

        go(n);
    }

    return 0;
}
