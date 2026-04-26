#include <bits/stdc++.h>

using namespace std;

int cnt[26];
int maxIdx;

bool isVague;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (char ch : str)
    {
        if (ch <= 'Z')
        {
            cnt[ch - 'A']++;
        }
        else // if (ch <= 'z')
        {
            cnt[ch - 'a']++;
        }
    }

    for (int i = 1; i < 26; i++)
    {
        if (cnt[maxIdx] < cnt[i])
        {
            maxIdx = i;

            isVague = false;
        }
        else if (cnt[maxIdx] == cnt[i])
        {
            isVague = true;
        }
    }

    if (true == isVague)
    {
        cout << '?';
    }
    else
    {
        cout << (char)(maxIdx + 'A');
    }
    
    return 0;
}
