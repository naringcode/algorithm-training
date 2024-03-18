#include <bits/stdc++.h>

using namespace std;

queue<int> q;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);

    while (true)
    {
        int input;

        cout << "Input : ";
        cin >> input;

        if (input < 0)
            break;

        if (0 == input)
        {
            if (q.empty())
            {
                cout << "empty\n";
            }
            else
            {
                cout << format("[{}]\n", q.front());
                q.pop();
            }
        }
        else
        {
            if (q.size() < 8)
            {
                q.push(input);
            }
            else
            {
                cout << "full\n";
            }
        }
    }

    return 0;
}
