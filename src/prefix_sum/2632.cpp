#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll want;

ll m, n;

ll pizzaA[1004];
ll pizzaB[1004];

// vector<ll> sumA;
// vector<ll> sumB;
map<ll, ll> sumA;
map<ll, ll> sumB;

ll sum;

ll res;

// 딱 봐도 누적합

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> want;

    cin >> m >> n;

    // sumA.push_back(0);
    // sumB.push_back(0);
    sumA[0] = 1;
    sumB[0] = 1;

    // pizza A
    for (ll i = 0; i < m; i++)
    {
        cin >> pizzaA[i];
    }

    sum = 0;

    for (ll i = 0; i < m; i++)
    {
        sum += pizzaA[i];

        // sumA.push_back(sum);
        sumA[sum]++;
    }

    for (ll i = 1; i < m; i++)
    {
        sum = 0;

        for (ll j = 0; j < m - 1; j++)
        {
            sum += pizzaA[(i + j) % m];

            // sumA.push_back(sum);
            sumA[sum]++;
        }
    }

    // pizza B
    for (ll i = 0; i < n; i++)
    {
        cin >> pizzaB[i]; 
    }

    sum = 0;

    for (ll i = 0; i < n; i++)
    {
        sum += pizzaB[i];

        // sumB.push_back(sum);
        sumB[sum]++;
    }

    for (ll i = 1; i < n; i++)
    {
        sum = 0;

        for (ll j = 0; j < n - 1; j++)
        {
            sum += pizzaB[(i + j) % n];

            // sumB.push_back(sum);
            sumB[sum]++;
        }
    }
    
    // find
    // sort(sumA.begin(), sumA.end());
    // sort(sumB.begin(), sumB.begin());

    // for (auto& elem : sumA)
    // {
    //     res += count(sumB.begin(), sumB.end(), want - elem);
    // }

    for (auto& pair : sumA)
    {
        res += pair.second * sumB[want - pair.first];
    }

    cout << res;

    return 0;
}