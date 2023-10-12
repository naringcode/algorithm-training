#include <bits/stdc++.h>

using namespace std;

int n;

vector<int> vec;
bool arr[204];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> n;

        if (-1 == n)
            break;

        vec.clear();
        fill(arr, arr + 204, false);

        vec.push_back(n);
        arr[n] = true;

        while (true)
        {
            cin >> n;

            if (0 == n)
                break;

            vec.push_back(n);
            arr[n] = true;
        }

        res = 0;

        for (int elem : vec)
        {
            if (true == arr[elem * 2])
            {
                res++;
            }
        }

        cout << res << '\n';
    }

    return 0;
}