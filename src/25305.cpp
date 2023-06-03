#include <bits/stdc++.h>

using namespace std;

vector<int> vec;

int n;
int k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    cin >> n >> k;

    vec.resize(n);

    for (int& elem : vec)
    {
        cin >> elem;
    }

    sort(vec.begin(), vec.end(), greater<int>());

    cout << vec[k - 1];

    return 0;
}