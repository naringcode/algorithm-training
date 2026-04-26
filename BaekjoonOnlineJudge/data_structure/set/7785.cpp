#include <bits/stdc++.h>

using namespace std;

// struct Comp
// {
//     bool operator()(const string& lhs, const string& rhs) const
//     {
//         return lhs > rhs;
//     }
// };

set<string, greater<string>> ss;

string name;
string state;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> name >> state;

        if ("enter" == state)
        {
            ss.emplace(name);
        }
        else
        {
            ss.erase(name);
        }
    }

    for (auto& elem : ss)
    {
        cout << elem << '\n';
    }

    return 0;
}