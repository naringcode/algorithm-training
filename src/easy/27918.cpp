#include <bits/stdc++.h>

using namespace std;

int n;

int a;
int b;

vector<char> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char ch;

        cin >> ch;

        vec.push_back(ch);
    }

    for (char ch : vec)
    {
        if ('D' == ch)
        {
            a++;
        }
        else
        {
            b++;
        }

        if (abs(a - b) == 2)
            break;
    }

    cout << a << ':' << b;

    return 0;
}
