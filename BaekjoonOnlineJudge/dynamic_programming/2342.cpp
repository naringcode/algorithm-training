#include <bits/stdc++.h>

using namespace std;

/*
    1 -> 1 : 0
    1 -> 2 : 2
    1 -> 3 : 3
    1 -> 4 : 2

    2 -> 1 : 2
    2 -> 2 : 0
    2 -> 3 : 2
    2 -> 4 : 3

    3 -> 1 : 3
    3 -> 2 : 2
    3 -> 3 : 0
    3 -> 4 : 2

    4 -> 1 : 2
    4 -> 2 : 3
    4 -> 3 : 2
    4 -> 4 : 0
 */

constexpr int INF = 999'999'999;

int n;

int arr[100'004];
int dp[100'004][5][5];

int res = 999'999'999;

int nextCost(int currPos, int nextPos)
{
    if (0 == currPos)
        return 2;

    if (currPos == nextPos)
        return 1;

    if (1 == abs(currPos - nextPos) % 2)
    {
        return 3; // 인접
    }
    else
    {
        return 4; // 반대
    }
}

int go(int idx, int leftLeg, int rightLeg)
{
    if (leftLeg == rightLeg)
        return INF;

    if (n == idx)
        return 0;

    int& memo = dp[idx][leftLeg][rightLeg];
    
    if (-1 != memo)
        return memo;

    // 왼쪽 움직
    memo = nextCost(leftLeg, arr[idx]) + go(idx + 1, arr[idx], rightLeg);

    // 오른쪽 움직
    memo = min(memo, nextCost(rightLeg, arr[idx]) + go(idx + 1, leftLeg, arr[idx]));

    return memo;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    memset(dp, -1, sizeof(dp));

    while (true)
    {
        cin >> arr[n];

        if (0 == arr[n])
            break;

        n++;
    }
    
    if (0 == n)
    {
        cout << 0;
        
        return 0;
    }

    cout << 2 + go(1, arr[0], 0);

    return 0;
}