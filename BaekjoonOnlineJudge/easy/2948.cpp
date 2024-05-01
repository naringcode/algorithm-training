#include <bits/stdc++.h>

using namespace std;

const string table[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

int d;
int m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> d >> m;

    tm myTm = (tm)0;
    {
        myTm.tm_year = 2009 - 1900;
        myTm.tm_mon  = m - 1;
        myTm.tm_mday = d;
    }

    time_t  myT = mktime(&myTm);
    tm* localTm = localtime(&myT);

    cout << table[localTm->tm_wday];

    return 0;
}
