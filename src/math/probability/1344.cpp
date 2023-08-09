#include <bits/stdc++.h>

using namespace std;

double a;
double b;

int primes[24];

// 인덱스, a의 골, b의 골
double dp[24][24][24];

void make_primes()
{
    fill(primes, primes + 24, 1);

    primes[0] = 0;
    primes[1] = 0;

    for (int i = 2; i < 24; i++)
    {
        if (0 == primes[i])
            continue;

        for (int j = 2 * i; j < 24; j += i)
        {
            primes[j] = 0;
        }
    }
}

double go(int idx, int goal_a, int goal_b)
{
    if (18 == idx)
    {
        return (primes[goal_a] | primes[goal_b]) ? 1.0 : 0.0;
    }

    double& memo = dp[idx][goal_a][goal_b];

    if (memo > -0.1)
        return memo;

    memo =  go(idx + 1, goal_a + 1, goal_b + 1) * a * b;
    memo += go(idx + 1, goal_a + 1, goal_b) * a * (1.0 - b);
    memo += go(idx + 1, goal_a, goal_b + 1) * (1.0 - a) * b;
    memo += go(idx + 1, goal_a, goal_b) * (1.0 - a) * (1.0 - b);

    return memo;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    make_primes();

    cin >> a >> b;

    a /= 100.0;
    b /= 100.0;

    fill(&dp[0][0][0], &dp[0][0][0] + 24 * 24 * 24, -1.0);

    cout << fixed;
    cout.precision(6);

    cout << go(0, 0, 0);

    return 0;
}
