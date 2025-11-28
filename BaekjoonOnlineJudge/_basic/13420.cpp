#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;

ll a;
char op;
ll b;
char discard;
ll c;

bool res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> a >> op >> b >> discard >> c;

        res = false;

        if (op == '+')
        {
            if (a + b == c)
            {
                res = true;
            }
        }
        else if (op == '-')
        {
            if (a - b == c)
            {
                res = true;
            }
        }
        else if (op == '*')
        {
            if (a * b == c)
            {
                res = true;
            }
        }
        else if (op == '/')
        {
            if (a / b == c)
            {
                res = true;
            }
        }

        if (res == true)
        {
            println("correct");
        }
        else
        {
            println("wrong answer");
        }
    }

    return 0;
}
