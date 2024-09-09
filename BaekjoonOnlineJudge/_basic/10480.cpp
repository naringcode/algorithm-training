#include <bits/stdc++.h>

using namespace std;

struct Score
{
    int id;

    int cnt[3];

    int total;
};

Score students[3];

int n;
int x;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> x;

        if (0 == x % 2)
        {
            cout << x << " is even\n";
        }
        else
        {
            cout << x << " is odd\n";
        }
    }

    return 0;
}
