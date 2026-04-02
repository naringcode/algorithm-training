#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;

int d;
int n;
int s;
int p;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> d >> n >> s >> p;

        int tempA = n * s;
        int tempB = n * p + d;

        if (tempA < tempB)
        {
            println("do not parallelize");
        }
        else if (tempA == tempB)
        {
            println("does not matter");
        }
        else
        {
            println("parallelize");
        }
    }

    return 0;
}
