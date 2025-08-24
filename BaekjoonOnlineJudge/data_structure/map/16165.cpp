#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

map<string, set<string>> mpTeam;
map<string, string> mpMember;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i : views::iota(0, n))
    {
        string team;
        cin >> team;

        int num;
        cin >> num;

        while (num--)
        {
            string member;
            cin >> member;

            mpTeam[team].insert(member);
            mpMember[member] = team;
        }
    }

    for (int i : views::iota(0, m))
    {
        string str;
        int num;
        
        cin >> str;
        cin >> num;

        if (num == 0)
        {
            for (auto& elem : mpTeam[str])
            {
                println("{}", elem);
            }
        }
        else if (num == 1)
        {
            println("{}", mpMember[str]);
        }
    }

    return 0;
}
