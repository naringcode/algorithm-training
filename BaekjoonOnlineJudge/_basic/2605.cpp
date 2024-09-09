#include <bits/stdc++.h>

using namespace std;

int n;
int a;

vector<int> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        vec.insert(vec.end() - a, i);
    }

    for (int elem : vec)
    {
        cout << elem << ' ';
    }

    return 0;
}
