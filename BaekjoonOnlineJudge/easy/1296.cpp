#include <bits/stdc++.h>

using namespace std;

int nameLove[4];
int teamLove[4];

int n;

string str;
vector<string> vec;

int heuri = -1;
string res;

void make_value(const string& str, int arrLove[])
{
    for (int i = 0; i < 4; i++)
    {
        arrLove[i] = 0;
    }

    for (const char& ch : str)
    {
        switch (ch)
        {
            case 'L' : arrLove[0]++; break;
            case 'O' : arrLove[1]++; break;
            case 'V' : arrLove[2]++; break;
            case 'E' : arrLove[3]++; break;
        }
    }
}

int calc_value()
{
    int arrTemp[4];

    for (int i = 0; i < 4; i++)
    {
        arrTemp[i] = nameLove[i] + teamLove[i];
    }

    // L : 0
    // O : 1
    // V : 2
    // E : 3
    int res;

    res = arrTemp[0] + arrTemp[1];
    res *= arrTemp[0] + arrTemp[2];
    res *= arrTemp[0] + arrTemp[3];
    
    res *= arrTemp[1] + arrTemp[2];
    res *= arrTemp[1] + arrTemp[3];

    res *= arrTemp[2] + arrTemp[3];

    res %= 100;

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    ::make_value(str, nameLove);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        vec.push_back(str);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < n; i++)
    {
        ::make_value(vec[i], teamLove);

        int temp = calc_value();

        if (heuri < temp)
        {
            heuri = temp;

            res = vec[i];
        }
    }

    cout << res;

    return 0;
}