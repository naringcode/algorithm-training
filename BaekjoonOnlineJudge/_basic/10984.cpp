#include <bits/stdc++.h>

using namespace std;

int t;

int n;

int a;
double b;

int sumA;
double sumB;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        sumA = 0;
        sumB = 0.0;

        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;

            sumA += a;
            sumB += b * a;
        }

        cout.precision(1);
        cout << sumA << ' ' << fixed << sumB / sumA << '\n';
    }

    return 0;
}
