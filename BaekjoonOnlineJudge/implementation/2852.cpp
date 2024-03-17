#include <bits/stdc++.h>

using namespace std;

int n;

int    win;
string str;

int cntA;
int cntB;

int resA;
int resB;

int strToTime(const string& str)
{
    int mm;
    int ss;

    mm = str[0] - '0';
    mm *= 10;
    mm += str[1] - '0';

    ss = str[3] - '0';
    ss *= 10;
    ss += str[4] - '0';

    return mm * 60 + ss;
}

string timeToStr(int time)
{
    string str = "00:00";

    int mm = time / 60;
    int ss = time % 60;

    if (mm >= 10)
    {
        str[0] = mm / 10 + '0';
    }

    str[1] = mm % 10 + '0';

    if (ss >= 10)
    {
        str[3] = ss / 10 + '0';
    }

    str[4] = ss % 10 + '0';

    return str;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int time;

        cin >> win;
        cin >> str;

        time = strToTime(str);
        time = 2880 - time;

        if (1 == win)
        {
            cntA++;

            if (0 == cntA - cntB)
            {
                resB -= time;
            }
            else if (1 == cntA - cntB)
            {
                resA += time;
            }
        }
        else
        {
            cntB++;

            if (0 == cntB - cntA)
            {
                resA -= time;
            }
            else if (1 == cntB - cntA)
            {
                resB += time;
            }
        }
    }

    cout << timeToStr(resA) << '\n';
    cout << timeToStr(resB);

    return 0;
}
