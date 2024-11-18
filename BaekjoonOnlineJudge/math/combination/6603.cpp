#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int k;
int arr[54];

vector<int> vec;

void go(int idx)
{
    if (vec.size() == 6)
    {
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << ' ';
        }

        cout << '\n';

        return;
    }

    for (int i = idx + 1; i < k; i++)
    {
        vec.push_back(arr[i]);

        go(i);

        vec.pop_back();
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> k;
        if (k == 0)
            break;

        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }

        go(-1);

        cout << '\n';
    }

    return 0;
}
