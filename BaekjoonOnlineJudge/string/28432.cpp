#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

int questIdx;

vector<string> wordVec;
set<string> wordSet;

string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i : views::iota(0, n))
    {
        string temp;
        cin >> temp;

        if (temp == "?")
        {
            questIdx = i;
        }

        wordVec.push_back(temp);
        wordSet.insert(temp);
    }

    cin >> m;

    for (int i : views::iota(0, m))
    {
        string temp;
        cin >> temp;

        if (m == 1)
        {
            res = temp;

            break;
        }

        bool cand = true;

        if (questIdx != 0)
        {
            if (wordVec[questIdx - 1].back() != temp.front())
            {
                cand = false;
            }
        }

        if (questIdx != wordVec.size() - 1)
        {
            if (wordVec[questIdx + 1].front() != temp.back())
            {
                cand = false;
            }
        }

        if (cand == true)
        {
            if (wordSet.contains(temp) == false)
            {
                res = temp;
            }
        }
    }

    println("{}", res);

    return 0;
}
