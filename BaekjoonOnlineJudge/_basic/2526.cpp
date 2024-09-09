#include <bits/stdc++.h>

using namespace std;

int n;
int p;

int curr;
int step;

unordered_map<int, int> mp;

int res;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> p;

    curr = n;
    step = 1;

    mp[curr] = step++;

    while (true)
    {
        curr = (curr * n) % p;

        if (mp.end() != mp.find(curr))
        {
            res = step - mp[curr];

            break;
        }

        mp[curr] = step++;
    }

    cout << res;

    return 0;
}
