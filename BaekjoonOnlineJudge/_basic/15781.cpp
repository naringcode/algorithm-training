#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

int mxA;
int mxB;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    while (n--)
    {
        int temp;
        cin >> temp;

        mxA = max(mxA, temp);
    }
    
    while (m--)
    {
        int temp;
        cin >> temp;

        mxB = max(mxB, temp);
    }

    println("{}", mxA + mxB);

    return 0;
}
