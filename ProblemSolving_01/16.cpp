#include <bits/stdc++.h>

using namespace std;

int lowerA[26];
int upperA[26];

int lowerB[26];
int upperB[26];

string strA;
string strB;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> strA >> strB;

    for (char elem : strA)
    {
        if ('a' <= elem && elem <= 'z')
        {
            lowerA[elem - 'a']++;
        }
        else if ('A' <= elem && elem <= 'Z')
        {
            upperA[elem - 'A']++;
        }
    }
    
    for (char elem : strB)
    {
        if ('a' <= elem && elem <= 'z')
        {
            lowerB[elem - 'a']++;
        }
        else if ('A' <= elem && elem <= 'Z')
        {
            upperB[elem - 'A']++;
        }
    }

    bool flag = true;

    for (int i = 0; i < 26; i++)
    {
        if (lowerA[i] - lowerB[i] || upperA[i] - upperB[i])
        {
            flag = false;

            break;
        }
    }

    if (true == flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
