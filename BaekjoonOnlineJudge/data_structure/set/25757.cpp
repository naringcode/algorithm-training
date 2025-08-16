#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
char type;

string str;
set<string> mySet;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> type;

    for (int i : views::iota(0, n))
    {
        cin >> str;

        mySet.insert(str);
    }

    if (type == 'Y')
    {
        println("{}", mySet.size());
    }
    else if (type == 'F')
    {
        println("{}", mySet.size() / 2);
    }
    else if (type == 'O')
    {
        println("{}", mySet.size() / 3);
    }

    return 0;
}
