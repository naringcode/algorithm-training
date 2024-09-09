#include <bits/stdc++.h>

using namespace std;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    cout << count_if(str.begin(), str.end(), [](char ch) {
        return 'a' == ch || 'e' == ch || 'i' == ch || 'o' == ch || 'u' == ch;
    });

    return 0;
}
