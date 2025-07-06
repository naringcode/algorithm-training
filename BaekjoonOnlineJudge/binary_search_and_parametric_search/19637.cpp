#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

vector<string> strVec;
vector<ll> numVec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i : views::iota(0, n))
    {
        string str;
        ll num;

        cin >> str >> num;

        strVec.push_back(str);
        numVec.push_back(num);
    }

    for (int i : views::iota(0, m))
    {
        ll num;
        cin >> num;

        int left  = 0;
        int right = numVec.size() - 1;

        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (num <= numVec[mid])
            {
                right = mid - 1;
            }
            else // if (num > numVec[mid])
            {
                left = mid + 1;
            }
        }

        println("{}", strVec[left]);
    }
    
    return 0;
}
