#include <bits/stdc++.h>

using namespace std;

int hour;
int minute;
int sec;

int required;

int reqH;
int reqM;
int reqS;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> hour >> minute >> sec;
    cin >> required;

    reqH = required / 3600;
    required = required % 3600;

    reqM = required / 60;
    reqS = required % 60;

    sec += reqS;

    if (sec >= 60)
    {
        sec -= 60;

        minute++;
    }

    minute += reqM;

    if (minute >= 60)
    {
        minute -= 60;

        hour++;
    }

    hour += reqH;

    if (hour >= 24)
    {
        hour %= 24;
    }

    cout << hour << ' ' << minute << ' ' << sec;

    return 0;
}