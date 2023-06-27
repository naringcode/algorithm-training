#include <bits/stdc++.h>

using namespace std;

int n;

priority_queue<int, vector<int>, greater<int>> pq;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;

        cin >> num;

        if (0 == num)
        {
            if (pq.size())
            {
                cout << pq.top() << '\n';

                pq.pop();
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else
        {
            pq.push(num);
        }
    }

    return 0;
}
