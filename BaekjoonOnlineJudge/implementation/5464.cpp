#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int n;
int m;

int rsArr[104];
int wkArr[2004];

int parking[2004];

priority_queue<int, vector<int>, greater<int>> remaining;
queue<int> waiting;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        remaining.push(i);

        cin >> rsArr[i];
    }

    for (int i = 1; i <= m; i++)
    {
        cin >> wkArr[i];
    }

    for (int i = 0; i < m * 2; i++)
    {
        int temp;
        cin >> temp;

        if (temp > 0)
        {
            if (remaining.empty() == true)
            {
                waiting.push(temp);

                continue;
            }
            
            parking[temp] = remaining.top();
            remaining.pop();
        }
        else if (temp < 0)
        {
            temp = -temp;

            res += rsArr[parking[temp]] * wkArr[temp];
            
            if (waiting.empty() == true)
            {
                remaining.push(parking[temp]);
            }
            else
            {
                parking[waiting.front()] = parking[temp];
                waiting.pop();
            }
        }
    }

    println("{}", res);

    return 0;
}
