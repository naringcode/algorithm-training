#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;

int a;
int b;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> a >> b;
        cin >> str;

        for (char& ch : str)
        {
            int temp = (int)(ch - 'A');
            temp = (a * temp) + b;
            temp %= 26;

            temp += 'A';

            ch = (char)temp;
        }

        println("{}", str);
    }

    return 0;
}
