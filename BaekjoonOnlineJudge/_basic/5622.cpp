#include <bits/stdc++.h>

using namespace std;

int    mappings[26] = { 
        3, 3, 3, 
        4, 4, 4, 
        5, 5, 5,
        6, 6, 6,
        7, 7, 7,
        8, 8, 8, 8,
        9, 9, 9,
        10, 10, 10, 10 };

string str;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (char ch : str)
    {
        res += mappings[ch - 'A'];
    }

    cout << res;

    return 0;
}
