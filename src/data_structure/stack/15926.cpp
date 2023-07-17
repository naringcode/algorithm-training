#include <bits/stdc++.h>

using namespace std;

int n;

string str;
vector<int> stk;

// bool completed[200'004];
vector<bool> completed;

int id;

int temp;
int res;

// 완성시킬 수 있는 괄호인지부터 계산하도록 하자.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> str;

    completed.resize(n);

    for (char ch : str)
    {
        if ('(' == ch)
        {
            stk.push_back(id);

            id++;
        }
        else if (')' == ch)
        {
            if (stk.size())
            {
                completed[stk.back()] = true;

                stk.pop_back();
            }
            else
            {
                id++; // 연결될 수 없으니 id 증가
            }
        }
    }

    for (int idx = 0; idx < id; idx++)
    {
        if (false == completed[idx])
        {
            temp = 0;

            continue;
        }

        temp += 2;

        res = max(res, temp);
    }

    cout << res;

    return 0;
}