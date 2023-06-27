#include <bits/stdc++.h>

using namespace std;

int n;

vector<int> remaining;
vector<int> vec;

vector<char> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        remaining.push_back(i);
    }

    reverse(remaining.begin(), remaining.end());

    for (int i = 0; i < n; i++)
    {
        int num;

        cin >> num;

        while (remaining.size() && num >= remaining.back())
        {
            vec.push_back(remaining.back());

            remaining.pop_back();

            res.push_back('+');
        }

        while (vec.size() && num != vec.back())
        {
            vec.pop_back();

            res.push_back('-');
        }

        if (vec.size() && num == vec.back())
        {
            vec.pop_back();

            res.push_back('-');
        }
        else
        {
            res.clear();

            i++;

            while (i < n) // 남은 것 털기 ★
            {
                cin >> num;

                i++;
            }

            break;
        }
    }

    if (0 == res.size())
    {
        cout << "NO";
    }
    else
    {
        for (char ch : res)
        {
            cout << ch << '\n';
        }
    }

    return 0;
}
