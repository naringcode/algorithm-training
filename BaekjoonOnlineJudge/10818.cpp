#include <bits/stdc++.h>

using namespace std;

int n;

int x;

int minX = 10'000'000;
int maxX = -10'000'000; // 입력 조건 잘 읽자

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;

        minX = std::min(minX, x);
        maxX = std::max(maxX, x);
    }

    cout << minX << ' ' << maxX;

    return 0;
}
