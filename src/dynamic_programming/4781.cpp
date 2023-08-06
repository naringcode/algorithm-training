#include <bits/stdc++.h>

using namespace std;

using ll = long long;

constexpr ll INF = 999'999'999'999;
constexpr double EPSILON = 0.01;

int n;

double m;
int convM;

int c;
double p;
int convP;

ll dp[10'004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> n >> m;

        convM = m * 100.0 + EPSILON;

        if (0 == n && 0 == convM)
            break;

        // fill(dp, dp + 10'004, INF);
        fill(dp, dp + 10'004, 0);
            
        dp[0] = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> c >> p;

            convP = p * 100.0 + EPSILON;

            for (int currP = convP; currP <= convM; currP++)
            {
                dp[currP] = max(dp[currP], dp[currP - convP] + c);
            }
        }

        cout << dp[convM] << '\n';
    }

    return 0;
}