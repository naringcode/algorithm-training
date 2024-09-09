#include <bits/stdc++.h>

using namespace std;

time_t timePoint;
tm*    myTM;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);

    timePoint = time(nullptr);
    myTM = localtime(&timePoint);

    printf("%d-%02d-%02d", myTM->tm_year + 1900, myTM->tm_mon + 1, myTM->tm_mday);
    
    return 0;
}