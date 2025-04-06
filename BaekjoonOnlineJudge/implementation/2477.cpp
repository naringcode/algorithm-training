#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int k;

int dir[10];
int len[10];

int maxW = numeric_limits<int>::min();
int maxH = numeric_limits<int>::min();

int maxWIdx;
int maxHIdx;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> k;

    for (int i : views::iota(0, 6))
    {
        cin >> dir[i] >> len[i];

        if (dir[i] == 1 || dir[i] == 2)
        {
            if (len[i] > maxW)
            {
                maxW = len[i];
                maxWIdx = i;
            }
        }
        else // if (dir[i] == 3 || dir[i] == 4)
        {
            if (len[i] > maxH)
            {
                maxH = len[i];
                maxHIdx = i;
            }
        }
    }

    // 움직이는 방향이 결정되어 있기 때문에 가장 작은 위치를 찾는 것이 가능하다.
    int mx = maxW * maxH;
    int mn = len[(maxWIdx + 3) % 6] * len[(maxHIdx + 3) % 6];

    println("{}", (mx - mn) * k);

    return 0;
}
