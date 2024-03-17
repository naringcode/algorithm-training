#include<bits/stdc++.h>

using namespace std;

int n;
int m;

vector<int> vec;

void go()
{
    if (m == vec.size())
    {
        for (int elem : vec)
        {
            cout << elem << ' ';
        }

        cout << '\n';

        return;
    }

    for (int i = 0; i < n; i++)
    {
        vec.push_back(i + 1);

        go();

        vec.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    go();

    return 0;
}
