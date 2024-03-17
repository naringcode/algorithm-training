#include <bits/stdc++.h>

using namespace std;

using ll = long long;

struct Comp
{
    bool operator()(const ll& lhs, const ll& rhs) const;
};

int n;
ll  x;

priority_queue<ll, vector<ll>, Comp> pq;

bool Comp::operator()(const ll& lhs, const ll& rhs) const
{
    if (abs(lhs) == abs(rhs))
    {
        return lhs > rhs;
    }

    return abs(lhs) > abs(rhs);
}

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
