#include <bits/stdc++.h>

using namespace std;

int n;

int type;
int num;

deque<int> dq;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> type;

        if (1 == type)
        {
            cin >> num;

            dq.push_front(num);
        }
        else if (2 == type)
        {
            cin >> num;

            dq.push_back(num);
        }
        else if (3 == type)
        {
            if (dq.size())
            {
                cout << dq.front() << '\n';

                dq.pop_front();
            }
            else
            {
                cout << "-1\n";
            }
        }
        else if (4 == type)
        {
            if (dq.size())
            {
                cout << dq.back() << '\n';

                dq.pop_back();
            }
            else
            {
                cout << "-1\n";
            }
        }
        else if (5 == type)
        {
            cout << dq.size() << '\n';
        }
        else if (6 == type)
        {
            if (dq.size())
            {
                cout << "0\n";
            }
            else
            {
                cout << "1\n";
            }
        }
        else if (7 == type)
        {
            if (dq.size())
            {
                cout << dq.front() << '\n';
            }
            else
            {
                cout << "-1\n";
            }
        }
        else if  (8 == type)
        {
            if (dq.size())
            {
                cout << dq.back() << '\n';
            }
            else
            {
                cout << "-1\n";
            }
        }
    }

    return 0;
}