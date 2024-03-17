#include <bits/stdc++.h>

using namespace std;

int n;

int sum;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 5; i++)
    {
        cin >> n;

        n *= n;

        sum += n;
    }

    cout << sum % 10;

    return 0;
}
