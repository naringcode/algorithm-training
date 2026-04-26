#include <bits/stdc++.h>

using namespace std;

map<int, int> mpArr;

int n;
int temp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int idx = 0; idx < n; idx++)
    {
        cin >> temp;

        mpArr[temp]++;
    }

    for (auto& iter : mpArr)
    {
        for (int cnt = 0; cnt < iter.second; cnt++)
        {
            cout << iter.first << '\n';
        }
    }

    return 0;
}