#include <bits/stdc++.h>

using namespace std;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (getline(cin, str))
    {
        cout << count_if(str.begin(), str.end(), [](char ch) { return 'a' <= ch && ch <= 'z'; }) << ' ';
        cout << count_if(str.begin(), str.end(), [](char ch) { return 'A' <= ch && ch <= 'Z'; }) << ' ';
        cout << count_if(str.begin(), str.end(), [](char ch) { return '0' <= ch && ch <= '9'; }) << ' ';
        cout << count_if(str.begin(), str.end(), [](char ch) { return ' ' == ch; }) << '\n';
    }

    return 0;
}
