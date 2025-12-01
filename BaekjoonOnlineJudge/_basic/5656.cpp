#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a;
string op;
int b;

int t;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        t++;

        cin >> a >> op >> b;

        if (op == "E")
            break;

        bool flag = false;

        if (op == ">" && a > b)
        {
            flag = true;
        }
        else if (op == ">=" && a >= b)
        {
            flag = true;
        }
        else if (op == "<" && a < b)
        {
            flag = true;
        }
        else if (op == "<=" && a <= b)
        {
            flag = true;
        }
        else if (op == "==" && a == b)
        {
            flag = true;
        }
        else if (op == "!=" && a != b)
        {
            flag = true;
        }

        if (flag == true)
        {
            println("Case {}: true", t);
        }
        else
        {
            println("Case {}: false", t);
        }
    }

    return 0;
}
