#include <bits/stdc++.h>

using namespace std;

using ll = long long;

map<char, vector<char>> mp;

int n;

char x;
char y;

bool go(char here, char target)
{
    if (here == target)
        return true;

    for (char there : mp[here])
    {
        bool temp = go(there, target);

        if (temp == true)
            return true;
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    
    while (n--)
    {
        string temp;

        cin >> x >> temp >> y;

        mp[x].push_back(y);
    }

    cin >> n;

    while (n--)
    {
        string temp;

        cin >> x >> temp >> y;

        if (go(x, y) == true)
        {
            println("T");
        }
        else
        {
            println("F");
        }
    }
    
    return 0;
}
