#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

string str;

vector<int> vec;
map<char, int> mp{ { '(', -1 }, { 'H', 1 }, { 'C', 12 }, { 'O', 16 } };

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (char ch : str)
    {
        if (auto iter = mp.find(ch); iter != mp.end())
        {
            vec.push_back(iter->second);

            continue;
        }

        if (')' == ch)
        {
            int num = 0;

            while (vec.size())
            {
                int temp = vec.back();
                vec.pop_back();

                if (-1 == temp)
                    break;

                num += temp;
            }

            vec.push_back(num);
        }
        else // number
        {
            int temp = vec.back();
            vec.pop_back();

            vec.push_back(temp * (ch - '0'));
        }
    }

    cout << std::accumulate(vec.begin(), vec.end(), 0);

    return 0;
}
