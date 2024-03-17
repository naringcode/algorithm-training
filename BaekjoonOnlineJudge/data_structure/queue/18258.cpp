#include <bits/stdc++.h>

using namespace std;

int n;

string order;
int val;

queue<int> q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> order;

        if ('p' == order[0] && 'u' == order[1])
        {
            cin >> val;

            q.push(val);
        }
        else if  ('p' == order[0] && 'o' == order[1])
        {
            if (q.size())
            {
                cout << q.front() << '\n';

                q.pop();
            }
            else
            {
                cout << -1 << '\n';
            }
        }
        else if ('s' == order[0])
        {
            cout << q.size() << '\n';
        }
        else if ('e' == order[0])
        {
            cout << q.empty() << '\n';
        }
        else if ('f' == order[0])
        {
            if (q.size())
            {
                cout << q.front() << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
        }
        else if ('b' == order[0])
        {
            if (q.size())
            {
                cout << q.back() << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
        }
    }

    return 0;
}