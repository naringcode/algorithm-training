#include <bits/stdc++.h>

using namespace std;

long long t;
long long temp;

long long num;
long long sum;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> num;

        sum = 0;

        for (int i = 0; i < num; i++)
        {
            cin >> temp;

            sum = (sum + temp) % num;
        }

        if (0 == sum % num)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
