#include<bits/stdc++.h>

using namespace std;

int t;
string str;

int callCnt;

int recursion(const char* str, int l, int r)
{
    callCnt++;

    if (l >= r)
        return 1;

    if (str[l] != str[r])
        return 0;

    return recursion(str, l + 1, r - 1);
}

int isPalindrome(const char* str)
{
    return recursion(str, 0, strlen(str) - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> str;

        callCnt = 0;

        cout << isPalindrome(str.c_str()) << ' ' << callCnt << '\n';
    }

    return 0;
}
