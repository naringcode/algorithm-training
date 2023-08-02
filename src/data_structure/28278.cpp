#include <bits/stdc++.h>

using namespace std;

int n;

int order;
int num;

vector<int> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> order;

        if (1 == order)
        {
            cin >> num;

            vec.push_back(num);
        }
        else if (2 == order)
        {
            if (vec.size())
            {
                cout << vec.back() << '\n';

                vec.pop_back();
            }
            else
            {
                cout << "-1\n";
            }
        }
        else if (3 == order)
        {
            cout << vec.size() << '\n';
        }
        else if (4 == order)
        {
            if (vec.size())
            {
                cout << "0\n";
            }
            else
            {
                cout << "1\n";
            }
        }
        else
        {
            if (vec.size())
            {
                cout << vec.back() << '\n';
            }
            else
            {
                cout << "-1\n";
            }
        }
    }

    return 0;
}