#include <bits/stdc++.h>

using namespace std;

int n;
int m;

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
        vec.push_back(idx + 1);

        go(idx);

        vec.pop_back();
    }
}

int main()
{
    cin >> n >> m;
    
    go(0);

    return 0;
}