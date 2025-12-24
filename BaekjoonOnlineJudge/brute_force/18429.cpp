#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int k;

int arr[54];
vector<int> indexes;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    for (int idx : views::iota(0, n))
    {
        cin >> arr[idx];

        indexes.push_back(idx);
    }

    do
    {
        bool flag = true;
        int  temp = 500;

        for (int idx : indexes)
        {
            temp += arr[idx] - k;

            if (temp < 500)
            {
                flag = false;

                break;
            }
        }

        if (flag == true)
        {
            res++;
        }
        
    } while (next_permutation(indexes.begin(), indexes.end()));

    println("{}", res);

    return 0;
}
