#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int table[]{ 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };

string strA;
string strB;

vector<int> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> strA >> strB;

    for (auto [chA, chB] : views::zip(strA, strB))
    {
        vec.push_back(table[chA - 'A']);
        vec.push_back(table[chB - 'A']);
    }

    while (vec.size() > 2)
    {
        vector<int> temp = vec;

        vec.clear();

        for (auto [valA, valB] : views::zip(temp, temp | views::drop(1)))
        {
            vec.push_back((valA + valB) % 10);
        }
    }

    println("{}{}", vec[0], vec[1]);

    return 0;
}
