#include <bits/stdc++.h>

using namespace std;

using ll = long long;

char ch;

int h1;
int m1;
int s1;

int h2;
int m2;
int s2;

int time1;
int time2;

int resTime;

int resS;
int resM;
int resH;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> h1 >> ch >> m1 >> ch >> s1;
    cin >> h2 >> ch >> m2 >> ch >> s2;

    time1 = h1;
    time1 = time1 * 60 + m1;
    time1 = time1 * 60 + s1;
    
    time2 = h2;
    time2 = time2 * 60 + m2;
    time2 = time2 * 60 + s2;

    resTime = time2 - time1;

    if (resTime < 0)
    {
        resTime += (24 * 60 * 60);
    }

    resS = resTime % 60;
    resTime /= 60;

    resM = resTime % 60;
    resTime /= 60;

    resH = resTime;

    if (resH == 0 && resM == 0 && resS == 0)
    {
        resH = 24;
    }
    
    println("{:02d}:{:02d}:{:02d}", resH, resM, resS);

    return 0;
}
