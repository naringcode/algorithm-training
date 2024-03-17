#include <bits/stdc++.h>

using namespace std;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    stringstream ss{ str };

    while (getline(ss, str, '-'))
    {
        cout << str[0];
    }

    return 0;
}