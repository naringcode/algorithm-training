#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
string str;

vector<string> vec;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i : views::iota(0, n))
    {
        cin >> str;

        ranges::reverse(str);

        vec.push_back(str);
    }

    for (int i : views::iota(1, (int)vec[0].length() + 1))
    {
        set<string> tempSet;

        bool flag = false;

        for (const string& str : vec)
        {
            auto tstr = ranges::to<string>(str | views::take(i));

            auto findIter = tempSet.find(tstr);

            if (findIter != tempSet.end())
            {
                flag = true;

                break;
            }

            tempSet.insert(tstr);
        }

        if (flag == false)
        {
            res = i;

            break;
        }
    }

    println("{}", res);

    return 0;
}
