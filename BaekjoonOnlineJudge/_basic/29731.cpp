#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const vector<string> table{
    "Never gonna give you up",
    "Never gonna let you down",
    "Never gonna run around and desert you",
    "Never gonna make you cry",
    "Never gonna say goodbye",
    "Never gonna tell a lie and hurt you",
    "Never gonna stop"
};

int n;
string str;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, str);

        auto cnt = count_if(table.begin(), table.end(),
                            [](const string& elem)
                            {
                                return str == elem;
                            });

        res += cnt;
    }

    if (res == n)
    {
        cout << "No";
    }
    else // if (res != n)
    {
        cout << "Yes";
    }

    return 0;
}
