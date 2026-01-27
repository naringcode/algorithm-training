#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

map<char, char> mp{ 
    { '.', '.' }, 
    { 'O', 'O' }, 
    { '-', '|' }, 
    { '|', '-' }, 
    { '/', '\\' }, 
    { '\\', '/' }, 
    { '^', '<' }, 
    { '<', 'v' }, 
    { 'v', '>' },
    { '>', '^' },
};

char res[104][104];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, m)))
    {
        char ch;
        cin >> ch;

        res[m - x - 1][y] = mp[ch];
    }

    for (int y : views::iota(0, m))
    {
        for (int x : views::iota(0, n))
        {
            print("{}", res[y][x]);
        }

        println("");
    }

    return 0;
}
