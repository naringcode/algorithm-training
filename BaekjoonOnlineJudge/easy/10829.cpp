#include <bits/stdc++.h>

using namespace std;

long long n;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (0 != n)
    {
        if (1 == n % 2)
        {
            str.push_back('1');
        }
        else
        {
            str.push_back('0');
        }

        n /= 2;
    }

    reverse(str.begin(), str.end());

    cout << str;

    return 0;
}
