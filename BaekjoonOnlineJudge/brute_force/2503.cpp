#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

string str;
int st;
int ba;

vector<tuple<string, int, int>> vec;

int res;

bool go(string cand, int idx)
{
    auto [str, st, ba] = vec[idx];

    int cntSt = 0;
    int cntBa = 0;

    for (int chIdx : views::iota(0, 3))
    {
        if (cand[chIdx] == str[chIdx])
        {
            cntSt++;
        }
        else if (cand.find(str[chIdx]) != string::npos)
        {
            cntBa++;
        }
    }

    if (cntSt == st && cntBa == ba)
        return true;
    
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> str >> st >> ba;

        vec.push_back({ str, st, ba });
    }

    for (auto [i, j, k] : views::cartesian_product(views::iota(1, 10), views::iota(1, 10), views::iota(1, 10)))
    {
        if (i == j || i == k || j == k)
            continue;

        bool chk = true;
        for (int idx : views::iota(0, ssize(vec)))
        {
            if (go(to_string(i * 100 + j * 10 + k), idx) == false)
            {
                chk = false;

                break;
            }
        }

        if (chk == true)
        {
            res++;
        }
    }

    println("{}", res);

    return 0;
}
