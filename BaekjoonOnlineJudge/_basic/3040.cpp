#include <bits/stdc++.h>

using namespace std;

int arr[14];

vector<int> res;

void go(int idx)
{
    if (7 == res.size())
    {
        int temp = std::accumulate(res.begin(), res.end(), 0);
 
        if (100 == temp)
        {
            for (int elem : res)
            {
                cout << elem << '\n';
            }
        }
        
        return;
    }

    if (9 == idx)
        return;

    while (idx < 9)
    {
        res.push_back(arr[idx]);

        go(idx + 1);

        res.pop_back();

        idx++;
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
    }

    go(0);

    return 0;
}
