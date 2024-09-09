#include <bits/stdc++.h>

using namespace std;

string beginStr;
string endStr;

int beginTime;
int endTime;

int resTime;

int str_to_time(string str)
{
    reverse(str.begin(), str.end());

    for (char& ch : str)
    {
        ch -= '0';
    }

    int res = 0;

    res += (str[0] + str[1] * 10);
    res += (str[3] + str[4] * 10) * 60;
    res += (str[6] + str[7] * 10) * 60 * 60;

    return res;
}

string time_to_str(int time)
{
    int sec;
    int min;
    int hour;

    sec = time % 60;
    time /= 60;

    min  = time % 60;
    hour = time / 60; 

    string res = "";

    if (hour < 10)
    {
        res += "0";
    }

    res += to_string(hour);
    res += ":";
    
    if (min < 10)
    {
        res += "0";
    }

    res += to_string(min);
    res += ":";
    
    if (sec < 10)
    {
        res += "0";
    }

    res += to_string(sec);

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> beginStr >> endStr;

    beginTime = str_to_time(beginStr);
    endTime = str_to_time(endStr);

    resTime = endTime - beginTime;

    if (resTime < 0)
    {
        // 1 day
        resTime += 60 * 60 * 24;
    }

    cout << time_to_str(resTime);

    return 0;
}
