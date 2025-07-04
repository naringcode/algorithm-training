#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

string pivot = "ACGT";
vector<string> vec;

string res;
int    hem;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i : views::iota(0, n))
    {
        string temp;
        cin >> temp;

        vec.push_back(temp);
    }

    for (int i : views::iota(0, m))
    {
        int cnt[4]{ 0 };

        for (int j : views::iota(0, n))
        {
            if (vec[j][i] == pivot[0])
            {
                cnt[0]++;
            }
            else if (vec[j][i] == pivot[1])
            {
                cnt[1]++;
            }
            else if (vec[j][i] == pivot[2])
            {
                cnt[2]++;
            }
            else if (vec[j][i] == pivot[3])
            {
                cnt[3]++;
            }
        }

        int mx = -999'999'999;
        int idx;

        for (int i = 0; i < 4; i++)
        {
            if (cnt[i] > mx)
            {
                mx  = cnt[i];
                idx = i;
            }
        }

        res += pivot[idx];

        for (int j : views::iota(0, n))
        {
            if (pivot[idx] != vec[j][i])
            {
                hem++;
            }
        }
    }

    println("{}", res);
    println("{}", hem);

    return 0;
}
