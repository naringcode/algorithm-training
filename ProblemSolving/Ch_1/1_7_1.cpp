#include <bits/stdc++.h>

using namespace std;

int code[104];
int n;

void print()
{
    for (int i = 0; i < n; i++)
    {
        cout << code[i];
    }

    cout << '\n';
}

void goA(int idx);
void goB(int idx);

void goA(int idx)
{
    if (idx == n)
    {
        print();

        return;
    }

    code[idx] = 0;
    goA(idx + 1);

    code[idx] = 1;
    goB(idx + 1);
}

void goB(int idx)
{
    if (idx == n)
    {
        print();

        return;
    }

    code[idx] = 1;
    goA(idx + 1);

    code[idx] = 0;
    goB(idx + 1);
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);

    cin >> n;

    goA(0);

    return 0;
}
