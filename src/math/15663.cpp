#include <bits/stdc++.h>

using namespace std;

struct Comp
{
    bool operator()(const string& lhs, const string& rhs) const
    {
        if (lhs.size() == rhs.size())
        {
            return lhs < rhs;
        }

        return lhs.size() < rhs.size();
    }
};

int n;
int m;

string arr[8];
bool visited[8];

vector<int> vec;

set<string> res;

void go(int depth)
{
    if (vec.size() == m)
    {
        string resStr = "";

        for (int idx : vec)
        {
            string str = "-----";
            int chIdx = 0;
            
            for (int chIdx = 0; chIdx < arr[idx].size(); chIdx++)
            {
                str[4 - chIdx] = arr[idx][arr[idx].size() - chIdx - 1];
            }
            
            resStr += str;
            resStr += ' ';
        }

        resStr.pop_back();

        res.insert(resStr);

        return;
    }

    for (int idx = depth; idx < n; idx++)
    {
        if (visited[idx])
            continue;

        visited[idx] = true;
        
        vec.push_back(idx);

        go(0);

        vec.pop_back();

        visited[idx] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    go(0);

    for (auto& elem : res)
    {
        for (char ch : elem)
        {
            if ('-' == ch)
                continue;

            cout << ch;
        }

        cout << '\n';
    }

    // cout << res.size();

    return 0;
}
