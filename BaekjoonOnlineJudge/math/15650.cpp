#include <bits/stdc++.h>

using namespace std;

int n;
int m;

int arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };

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
        vec.push_back(arr[idx]);

        go(idx + 1);

        vec.pop_back();
    }
}

int main()
{
    cin >> n >> m;
    
    go(0);

    return 0;
}