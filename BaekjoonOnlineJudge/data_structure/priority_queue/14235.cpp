#include <bits/stdc++.h>

using namespace std;

int n;

int a;
int num;

priority_queue<int> pq;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> a;

        if (0 == a)
        {
            if (pq.size() > 0)
            {
                num = pq.top();
                pq.pop();

                cout << num << '\n';
            }
            else
            {
                cout << "-1\n";
            }
        }
        else
        {
            while (a--)
            {
                cin >> num;

                pq.push(num);
            }
        }
    }

    return 0;
}
