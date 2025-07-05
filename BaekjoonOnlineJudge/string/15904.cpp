#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;
string ucpc = "UCPC";

int cur;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    getline(cin, str);

    for (char ch : str)
    {
        if (ch == ucpc[cur])
        {
            cur++;

            if (cur == ucpc.length())
            {
                println("I love UCPC");

                return 0;
            }
        }
    }

    println("I hate UCPC");

    return 0;
}
