#include <bits/stdc++.h>

using namespace std;

vector<int> arr{ 1, 0, 0 };

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (char ch : str)
    {
        ch = ch - 'A';

        if (0 == ch)
        {
            swap(arr[0], arr[1]);
        }
        else if (1 == ch)
        {
            swap(arr[1], arr[2]);
        }
        else if (2 == ch)
        {
            swap(arr[0], arr[2]);
        }
    }

    int idx = find(arr.begin(), arr.end(), 1) - arr.begin();

    cout << idx + 1;

    return 0;
}
