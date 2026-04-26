#include <bits/stdc++.h>

using namespace std;

int n, m;

vector<int> cards;

int res = 0;

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

        cards.push_back(temp);
    }

    n = cards.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int temp = cards[i] + cards[j] + cards[k];

                if (temp > m)
                    continue;

                res = max(res, temp);    
            }
        }
    }

    cout << res;

    return 0;
}
