#include <iostream>

using namespace std;

int arr[54];
int n;

int main()
{
    for (int i = 0; i < 50; i++)
    {
        cin >> arr[i];
    }

    cin >> n;

    auto iter = find(arr, arr + 50, n);

    auto dist = iter - arr;
    dist++;

    // cout << dist;


    if (dist >= 49)
    {
        cout << "F";
    }
    else if (dist >= 46)
    {
        cout << "C0";
    }
    else if (dist >= 36)
    {
        cout << "C+";
    }
    else if (dist >= 31)
    {
        cout << "B0";
    }
    else if (dist >= 16)
    {
        cout << "B+";
    }
    else if (dist >= 6)
    {
        cout << "A0";
    }
    else
    {
        cout << "A+";
    }

    return 0;
}
