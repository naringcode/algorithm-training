#include <bits/stdc++.h>
#include <ranges>

using namespace std;

using ll = long long;

int n;
int jimin;
int hansu;

int cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> jimin >> hansu;

    while (true)
    {
        if (jimin == hansu)
            break;

        jimin++;
        hansu++;
    
        jimin /= 2;
        hansu /= 2;

        cnt++;
    }

    cout << cnt;

    return 0;
}