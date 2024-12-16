#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string num;
int p;

int cnt;

map<string, int> mp;

int myPow(int base, int exp)
{
    int ret = 1;

    while (exp--)
    {
        ret *= base;
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> num >> p;

    mp[num] = cnt++;

    while (true)
    {
        int temp = 0;

        for (char ch : num)
        {
            int chNum = ch - '0';

            temp += myPow(chNum, p);
        }

        num = to_string(temp);

        if (mp.find(num) != mp.end())
            break;
        
        mp[num] = cnt++;
    }

    cout << mp[num];

    return 0;
}
