#include <bits/stdc++.h>

using namespace std;

int n;
int m;

int arr[8];

vector<int> vec;

void go(int depth)
{
    if (vec.size() == m)
    {
        for (int elem : vec)
        {
            cout << elem << ' ';
        }

        cout << '\n';

        return;
    }

    for (int idx = depth; idx < n; idx++)
    {
        if (vec.end() != find(vec.begin(), vec.end(), arr[idx]))
            continue;

        vec.push_back(arr[idx]);

        go(0);

        vec.pop_back();
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

    return 0;
}