#include <bits/stdc++.h>

using namespace std;

int n;

string str;

char go(char ch)
{
    return ch >= 'a' ? ch : ch + ('a' - 'A');
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> str;

        transform(str.begin(), str.end(), str.begin(), go);

        cout << str << '\n';
    }

    return 0;
}
