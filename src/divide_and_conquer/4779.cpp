#include<bits/stdc++.h>

using namespace std;

int n;
string str;

void go(int left, int right)
{
    if (right - left <= 1)
        return;

    int div = (right - left) / 3;

    for (int i = left + div; i < left + div * 2; i++)
    {
        str[i] = ' ';
    }

    go(left, left + div);
    go(left + div * 2, right);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (cin >> n)
    {
        str = "";

        n = pow(3, n);

        for (int i = 0; i < n; i++)
        {
            str += '-';
        }

        go(0, n);

        cout << str << '\n';
    }

    return 0;
}
