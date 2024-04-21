#include <bits/stdc++.h>

using namespace std;

string strA;
string strB;

int days;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> strA >> strB;

        if ("00:00" == strA && "00:00" == strB)
            break;

        int hours   = stoi(strA.substr(0, 2)) + stoi(strB.substr(0, 2));
        int minutes = stoi(strA.substr(3, 2)) + stoi(strB.substr(3, 2));

        days = 0;

        if (minutes >= 60)
        {
            minutes -= 60;
            hours++;
        }

        if (hours >= 24)
        {
            days = hours / 24;
            hours %= 24;
        }

        stringstream res;

        res << std::setw(2) << std::setfill('0') << hours << ":" << std::setw(2) << std::setfill('0') << minutes;

        if (0 != days)
        {
            res << " +" << days;
        }

        cout << res.str() << '\n';
    }

    return 0;
}
