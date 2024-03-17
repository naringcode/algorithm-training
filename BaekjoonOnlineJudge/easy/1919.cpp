#include <bits/stdc++.h>

using namespace std;

string str;

int alphabetCnt[2][26];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (char ch : str)
    {
        alphabetCnt[0][ch - 'a']++;
    }

    cin >> str;

    for (char ch : str)
    {
        alphabetCnt[1][ch - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        res += abs(alphabetCnt[0][i] - alphabetCnt[1][i]);
    }

    cout << res;

    return 0;
}
