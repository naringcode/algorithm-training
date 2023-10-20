#include <bits/stdc++.h>

using namespace std;

constexpr int MAP_SIZE = 35;

struct Item
{
    int a;
    int b;

    int diff;
};

int n;

array<char, MAP_SIZE>* maps;

vector<Item> diffVec;

Item res;

int get_diff_cnt(array<char, MAP_SIZE>& a, array<char, MAP_SIZE>& b)
{
    int diff = 0;

    for (int i = 0; i < MAP_SIZE; i++)
    {
        if (a[i] != b[i])
        {
            diff++;
        }
    }

    return diff;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    maps = new array<char, MAP_SIZE>[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < MAP_SIZE; j++)
        {
            cin >> maps[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            Item item;

            item.a = i;
            item.b = j;

            item.diff = get_diff_cnt(maps[i], maps[j]);

            diffVec.push_back(item);
        }
    }

    res = diffVec[0];

    for (const Item& item : diffVec)
    {
        if (res.diff > item.diff)
        {
            res = item;
        }
    }
    
    cout << res.a + 1 << ' ' << res.b + 1;

    delete[] maps;

    return 0;
}
