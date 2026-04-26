#include <bits/stdc++.h>

using namespace std;

int n;
int b;

string res;

char temp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> b;

    while (n > 0)
    {
        char temp = n % b;

        n /= b;

        if (temp < 10)
        {
            temp += '0';
        }
        else
        {
            temp += 'A' - 10;
        }

        res.insert(res.begin(), temp);
    }

    cout << res;

    return 0;
}
