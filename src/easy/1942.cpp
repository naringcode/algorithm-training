#include <bits/stdc++.h>

using namespace std;

string str;

int timeA;
int timeB;

int split(string str)
{
    stringstream ss(str);

    vector<int> ret;

    while (getline(ss, str, ':'))
    {
        ret.push_back(atoi(str.c_str()));
    }

    return ret[0] * 10000 + ret[1] * 100 + ret[2];
}

int getCount(int src, int dest)
{
    int ret = 0;

    while (src <= dest)
    {
        if (0 == src % 3)
        {
            ret++;
        }
        
        src++;

        if (60 == src % 100)
        {
            src -= 60;
            src += 100;

            if (6000 == src % 10000)
            {
                src -= 6000;
                src += 10000;
            }
        }
    }

    if (240000 == dest)
    {
        ret--;
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 3; i++)
    {
        cin >> str;
        timeA = split(str);
        
        cin >> str;
        timeB = split(str);

        int cnt = 0;

        if (timeB - timeA < 0)
        {
            cnt = getCount(timeA, 240000);
            cnt += getCount(0, timeB);
        }
        else
        {
            cnt = getCount(timeA, timeB);
        }

        cout << cnt << '\n';
    }

    return 0;
}