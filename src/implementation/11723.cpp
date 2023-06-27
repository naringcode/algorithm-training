#include <bits/stdc++.h>

using namespace std;

set<uint8_t> mySet;

int m;

string order;
int    num;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> order;

        switch (order[1])
        {
            case 'd': // add
            {
                cin >> num;

                mySet.insert(num);

                break;
            }

            case 'e': // remove
            {
                cin >> num;

                mySet.erase(num);

                break;
            }

            case 'h': // check
            {
                cin >> num;

                if (mySet.end() == mySet.find(num))
                {
                    cout << 0 << '\n';
                }
                else
                {
                    cout << 1 << '\n';
                }

                break;
            }

            case 'o': // toggle
            {
                cin >> num;

                if (mySet.end() == mySet.find(num))
                {
                    mySet.insert(num);
                }
                else
                {
                    mySet.erase(num);
                }

                break;
            }

            case 'l': // all
            {
                for (int elem = 1; elem <= 20; elem++)
                {
                    mySet.insert(elem);
                }

                break;
            }

            case 'm': // empty
            {
                mySet.clear();

                break;
            }
        }
    }

    return 0;
}
