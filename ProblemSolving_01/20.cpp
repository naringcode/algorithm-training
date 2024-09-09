#include <bits/stdc++.h>

using namespace std;

int n;

int arrA[104];
int arrB[104];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arrB[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (1 == arrA[i])
        {
            if (1 == arrB[i])
            {
                cout << "D";
            }
            else if (2 == arrB[i])
            {
                cout << "B";
            }
            else if (3 == arrB[i])
            {
                cout << "A";
            }
        }
        else if (2 == arrA[i])
        {
            if (1 == arrB[i])
            {
                cout << "A";
            }
            else if (2 == arrB[i])
            {
                cout << "D";
            }
            else if (3 == arrB[i])
            {
                cout << "B";
            }
        }
        else if (3 == arrA[i])
        {
            if (1 == arrB[i])
            {
                cout << "B";
            }
            else if (2 == arrB[i])
            {
                cout << "A";
            }
            else if (3 == arrB[i])
            {
                cout << "D";
            }
        }

        cout << '\n';
    }

    return 0;
}
