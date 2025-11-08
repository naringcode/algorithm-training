#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

string str;
vector<string> chns;

int kbs1;
int kbs2;

string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i : views::iota(0, n))
    {
        cin >> str;
        chns.push_back(str);
    }

    for (int idx : views::iota(0, n))
    {
        if (chns[idx] == "KBS1")
        {
            kbs1 = idx;
        }
        else if (chns[idx] == "KBS2")
        {
            kbs2 = idx;
        }
    }

    if (kbs1 > kbs2)
    {
        kbs2++;
    }

    for (int cnt : views::iota(0, kbs1))
    {
        res += '1';
    }

    for (int cnt : views::iota(0, kbs1))
    {
        res += '4';
    }

    if (kbs2 != 1)
    {
        for (int cnt : views::iota(0, kbs2))
        {
            res += '1';
        }
    
        for (int cnt : views::iota(1, kbs2))
        {
            res += '4';
        }
    }

    println("{}", res);

    return 0;
}
