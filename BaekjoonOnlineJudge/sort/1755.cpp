#include <bits/stdc++.h>

using namespace std;

using ll = long long;

map<char, string> mp{ 
    { '0', "zero" }, { '1', "one" },
    { '2', "two" }, { '3', "three" },
    { '4', "four" }, { '5', "five" },
    { '6', "six" }, { '7', "seven" },
    { '8', "eight" }, { '9', "nine" },
};

int m;
int n;

vector<pair<string, int>> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> m >> n;

    while (m <= n)
    {
        string str = "";

        for (char ch : to_string(m))
        {
            str += mp[ch];
        }

        vec.push_back({ str, m });

        m++;
    }

    sort(vec.begin(), vec.end());

    int cnt = 0;

    for (auto& pair : vec)
    {
        cout << pair.second << ' ';

        cnt++;

        if (cnt % 10 == 0)
        {
            cout << '\n';
        }
    }

    return 0;
}
