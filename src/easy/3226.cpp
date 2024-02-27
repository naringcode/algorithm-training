#include <bits/stdc++.h>

using namespace std;

int t;

string str;

int startTime;
int useTime;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> str >> useTime;

        startTime = 0;
        
        startTime = (str[0] - '0') * 10 + (str[1] - '0');
        startTime *= 60;

        startTime += (str[3] - '0') * 10 + (str[4] - '0');

        while (0 != useTime)
        {
            if (420 <= startTime && startTime < 1140)
            {
                res += 10;
            }
            else
            {
                res += 5;
            }

            useTime--;
            startTime++;
        }
    }

    cout << res;

    return 0;
}
