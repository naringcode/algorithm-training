#include <bits/stdc++.h>

using namespace std;

int n;

int num;
vector<int> vec;

int turn = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if (turn == num)
        {
            turn++;

            while (vec.size() && vec.back() == turn)
            {
                turn++;

                vec.pop_back();
            }
        }
        else
        {
            vec.push_back(num);
        }
    }

    if (vec.size())
    {
        cout << "Sad";
    }
    else
    {
        cout << "Nice";
    }

    return 0;
}