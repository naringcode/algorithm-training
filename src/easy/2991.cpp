#include <bits/stdc++.h>

using namespace std;

int a;
int b;
int c;
int d;

int p;
int m;
int n;

int arr[2004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c >> d;

    for (int i = 0; i <= 1000; i += a + b)
    {
        for (int j = i; j < i + a; j++)
        {
            arr[j]++;
        }
    }

    for (int i = 0; i <= 1000; i += c + d)
    {
        for (int j = i; j < i + c; j++)
        {
            arr[j]++;
        }
    }

    cin >> p >> m >> n;

    cout << arr[p - 1] << '\n' << arr[m - 1] << '\n' << arr[n - 1];

    return 0;
}
