#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;
int m;

vector<int> vec;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    vec.reserve(n + m);

    for (int i = 0; i < n + m; i++)
    {
        int temp;
        cin >> temp;

        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end());

    for (int elem : vec)
    {
        cout << elem << ' ';
    }

    return 0;
}
