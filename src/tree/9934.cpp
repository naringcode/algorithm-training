#include <bits/stdc++.h>

using namespace std;

int k;
int arr[2000];

vector<int> res[10];

void go(int left, int right, int level)
{
    if (left >= right)
        return;

    int mid = (left + right) / 2;

    go(left, mid, level + 1);

    res[level].push_back(arr[mid]);

    go(mid + 1, right, level + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> k;

    int len = pow(2, k) - 1;

    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }

    go(0, len, 0);

    for (int i = 0; i < k; i++)
    {
        for (int elem : res[i])
        {
            cout << elem << ' ';
        }

        cout << '\n';
    }

    return 0;
}
