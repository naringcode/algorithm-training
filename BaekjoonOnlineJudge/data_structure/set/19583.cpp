#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string s;
string e;
string q;

string userTime;
string user;

set<string> enterUsers;
set<string> leaveUsers;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> s >> e >> q;

    while (cin >> userTime)
    {
        cin >> user;

        if (userTime <= s)
        {
            enterUsers.insert(user);
        }
        else if (e <= userTime && userTime <= q)
        {
            if (enterUsers.contains(user) && !leaveUsers.contains(user))
            {
                leaveUsers.insert(user);

                res++;
            }
        }
    }

    println("{}", res);

    return 0;
}
