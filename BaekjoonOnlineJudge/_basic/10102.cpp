#include <bits/stdc++.h>

using namespace std;

int n;

string str;

int a;
int b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> str;

    a = count(str.begin(), str.end(), 'A');
    b = count(str.begin(), str.end(), 'B');

    if (a == b)
    {
        cout << "Tie";
    }
    else if (a > b)
    {
        cout << "A";
    }
    else
    {
        cout << "B";
    }

    return 0;
}
