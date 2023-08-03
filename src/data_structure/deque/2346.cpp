#include <bits/stdc++.h>

using namespace std;

int n;

int num;

deque<pair<int, int>> dq;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> num;

        dq.push_back({ i, num });
    }

    while (dq.size())
    {
        auto pair = dq.front();

        dq.pop_front();

        cout << pair.first << ' ';

        if (pair.second > 0)
        {
            pair.second--;

            for (int i = 0; i < pair.second; i++)
            {
                dq.push_back(dq.front());

                dq.pop_front();
            }
        }
        else
        {
            pair.second *= -1; // 양수
            
            for (int i = 0; i < pair.second; i++)
            {
                dq.push_front(dq.back());

                dq.pop_back();
            }
        }
    }

    return 0;
}