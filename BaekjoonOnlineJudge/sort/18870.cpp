#include <bits/stdc++.h>

using namespace std;

vector<int> vec;
vector<int> vec2;

int n;
int temp;

map<int, int> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    vec.reserve(n);
    vec2.reserve(n);

    for (int i = 0; i < n; i++)
    {
        cin >> temp;

        vec.push_back(temp);
    }

    vec2 = vec;

    sort(vec2.begin(), vec2.end());

    n = 0;

    for (const int& elem : vec2)
    {
        auto iter = res.find(elem);
        if (res.end() == iter)
        {
            res[elem] = n;

            n++;
        }
    }

    for (const int& elem : vec)
    {
        cout << res[elem] << ' ';
    }

    return 0;
}
