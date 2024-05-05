#include <bits/stdc++.h>

using namespace std;

int xA;
int yA;

int xB;
int yB;

int  k;
char ch;

unordered_map<char, pair<int, int>> mp = { 
    { 'I', { +1, 0 } },
    { 'S', { 0, +1 } },
    { 'Z', { -1, 0 } },
    { 'J', { 0, -1 } }
};

vector<int> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> xA >> yA;
    cin >> k;
    
    if (abs(xA - xB) <= 1 && abs(yA - yB) <= 1)
    {
        res.push_back(0);
    }

    for (int cnt = 1; cnt <= k; cnt++)
    {
        cin >> ch;

        xB += mp[ch].first;
        yB += mp[ch].second;

        if (abs(xA - xB) <= 1 && abs(yA - yB) <= 1)
        {
            res.push_back(cnt);
        }
    }

    if (res.empty())
    {
        cout << -1;
    }
    else
    {
        for (auto elem : res)
        {
            cout << elem << '\n';
        }
    }

    return 0;
}
