#include <bits/stdc++.h>

using namespace std;

int n;
int num;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (true)
    {
        cin >> num;

        if (0 == num)
            break;

        if (0 == num % n)
        {
            cout << num << " is a multiple of " << n << ".\n";
        }
        else
        {
            cout << num << " is NOT a multiple of " << n << ".\n";
        }
    }

    return 0;
}
