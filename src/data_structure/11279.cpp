#include <bits/stdc++.h>

using namespace std;

priority_queue<uint32_t> pq;

int n;

uint32_t x;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (0 == x)
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
            pq.push(x);
        }
    }

    return 0;
}
