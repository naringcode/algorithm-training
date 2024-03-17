#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> vec;

int a;
int b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (cin >> a)
    {
        cin >> b;

        vec.push_back({ a, b });
    }

    for (auto pair : vec)
    {
        cout << pair.second / (pair.first + 1) << '\n';
    }
    
    return 0;
}