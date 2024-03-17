#include <bits/stdc++.h>

using namespace std;

int n;

int arr[24][24];

vector<int> teamA;
vector<int> teamB;

int res = 999'999'999;

void go(int idx)
{
    if (teamA.size() == n / 2 && teamB.size() == n / 2)
    {
        int sumA = 0;
        int sumB = 0;

        for (int y : teamA)
        {
            for (int x : teamA)
            {
                sumA += arr[y][x];
            }
        }

        for (int y : teamB)
        {
            for (int x : teamB)
            {
                sumB += arr[y][x];
            }
        }

        res = min(res, abs(sumA - sumB));

        return;
    }

    if (teamA.size() > n / 2 || teamB.size() > n / 2)
        return;

    teamA.push_back(idx);

    go(idx + 1);

    teamA.pop_back();

    teamB.push_back(idx);

    go(idx + 1);
    
    teamB.pop_back();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> arr[y][x];
        }
    }

    go(0);

    cout << res;

    return 0;
}