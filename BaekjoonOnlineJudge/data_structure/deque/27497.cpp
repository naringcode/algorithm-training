#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;

int m;
char ch;

deque<char> dq;
vector<int> vec;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> m;

        if (1 == m)
        {
            cin >> ch;

            dq.push_back(ch);
            vec.push_back(m);
        }
        else if (2 == m)
        {
            cin >> ch;

            dq.push_front(ch);
            vec.push_back(m);
        }
        else
        {
            if (0 == vec.size())
                continue;

            int temp = vec.back();
            vec.pop_back();

            if (1 == temp)
            {
                dq.pop_back();
            }
            else if (2 == temp)
            {
                dq.pop_front();
            }
        }
    }

    if (0 == dq.size())
    {
        cout << 0;
    }
    else
    {
        while (dq.size() > 0)
        {
            cout << dq.front();

            dq.pop_front();
        }
    }

    return 0;
}
