#include <bits/stdc++.h>

using namespace std;

using ll = long long;

multiset<ll> dpq;

int t;
int k;

char ch;
ll   num;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int cnt = 0; cnt < t; cnt++)
    {
        cin >> k;

        for (int i = 0; i < k; i++)
        {
            cin >> ch >> num;

            if ('I' == ch)
            {
                dpq.insert(num);
            }
            if ('D' == ch)
            {
                if (0 == dpq.size())
                    continue;

                if (1 == num)
                {
                    // dpq.erase(--(dpq.rbegin().base()));
                    dpq.erase((++dpq.rbegin()).base());
                }
                else
                {
                    dpq.erase(dpq.begin());
                }
            }
        }

        if (dpq.size())
        {
            cout << *dpq.rbegin() << ' ' << *dpq.begin() << '\n';
            
            dpq.clear();
        }
        else
        {
            cout << "EMPTY\n";
        }
    }

    return 0;
}
