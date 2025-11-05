#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

string str;
int x;
map<string, int> mp;

bool res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i : views::iota(0, n))
    {
        cin >> str >> x;

        mp[str] += x;
    }

    for (auto [_, val] : mp)
    {
        if (val == 5)
        {
            println("YES");

            return 0;
        }
    }

    println("NO");

    return 0;
}
