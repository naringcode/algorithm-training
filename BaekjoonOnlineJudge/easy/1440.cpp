#include <bits/stdc++.h>

using namespace std;

enum
{
    Hour,
    Min,
    Sec
};

string str;
vector<int> vec;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    stringstream ss{ str };

    while (getline(ss, str, ':'))
    {
        vec.push_back(std::atoi(str.c_str()));
    }

    if ((vec[Hour] >= 1 && vec[Hour] <= 12) &&
        (vec[Min] >= 0 && vec[Min] <= 59) &&
        (vec[Sec] >= 0 && vec[Sec] <= 59))
    {
        res++;
    }
    
    if ((vec[Hour] >= 1 && vec[Hour] <= 12) &&
        (vec[Sec] >= 0 && vec[Sec] <= 59) &&
        (vec[Min] >= 0 && vec[Min] <= 59))
    {
        res++;
    }
    
    if ((vec[Min] >= 1 && vec[Min] <= 12) &&
        (vec[Hour] >= 0 && vec[Hour] <= 59) &&
        (vec[Sec] >= 0 && vec[Sec] <= 59))
    {
        res++;
    }
    
    if ((vec[Min] >= 1 && vec[Min] <= 12) &&
        (vec[Sec] >= 0 && vec[Sec] <= 59) &&
        (vec[Hour] >= 0 && vec[Hour] <= 59))
    {
        res++;
    }
    
    if ((vec[Sec] >= 1 && vec[Sec] <= 12) &&
        (vec[Hour] >= 0 && vec[Hour] <= 59) &&
        (vec[Min] >= 0 && vec[Min] <= 59))
    {
        res++;
    }
    
    if ((vec[Sec] >= 1 && vec[Sec] <= 12) &&
        (vec[Min] >= 0 && vec[Min] <= 59) &&
        (vec[Hour] >= 0 && vec[Hour] <= 59))
    {
        res++;
    }

    cout << res;

    return 0;
}
