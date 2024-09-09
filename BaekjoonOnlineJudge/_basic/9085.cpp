#include <bits/stdc++.h>

using namespace std;

int t;
int n;

int temp;
vector<int> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        vec.clear();

        while (n--)
        {
            cin >> temp;

            vec.push_back(temp);
        }

        cout << accumulate(vec.begin(), vec.end(), 0) << '\n';
    }

    return 0;
}
