#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;

int arr[4] = { 1, 0, 0, 2 };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (auto ch : str)
    {
        if (ch == 'A')
        {
            swap(arr[0], arr[1]);
        }
        else if (ch == 'B')
        {
            swap(arr[0], arr[2]);
        }
        else if (ch == 'C')
        {
            swap(arr[0], arr[3]);
        }
        else if (ch == 'D')
        {
            swap(arr[1], arr[2]);
        }
        else if (ch == 'E')
        {
            swap(arr[1], arr[3]);
        }
        else if (ch == 'F')
        {
            swap(arr[2], arr[3]);
        }
    }

    for (int i : views::iota(0, 4))
    {
        if (arr[i] == 1)
        {
            println("{}", i + 1);
        }
    }
    
    for (int i : views::iota(0, 4))
    {
        if (arr[i] == 2)
        {
            println("{}", i + 1);
        }
    }

    return 0;
}
