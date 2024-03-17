#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> vec;

int h;
int cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    
    vec.resize(n);

    for (int& elem : vec)
    {
        cin >> elem;
    }

    h = vec[0];
    cnt = 1;

    for (int elem : vec)
    {
        if (elem > h)
        {
            h = elem;

            cnt++;
        }
    }

    cout << cnt << ' ';

    reverse(vec.begin(), vec.end());

    h = vec[0];
    cnt = 1;

    for (int elem : vec)
    {
        if (elem > h)
        {
            h = elem;

            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
