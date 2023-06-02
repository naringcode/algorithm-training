#include <bits/stdc++.h>

using namespace std;

vector<int> vec;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    vec.resize(n);

    for (int& elem : vec)
    {
        cin >> elem;
    }

    sort(vec.begin(), vec.end());

    for (const int elem : vec)
    {
        cout << elem << '\n';
    }

    return 0;
}