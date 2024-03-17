#include <bits/stdc++.h>

using namespace std;

enum kResult
{
    kNone = 0,
    kAsc,
    kDesc,
    kMixed
};

int codes[8];
int conv[7];

kResult res = kNone;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 8; i++)
    {
        cin >> codes[i];

        codes[i] += 100; // 보정
    }

    for (int i = 0; i < 7; i++)
    {
        conv[i] = codes[i + 1] - codes[i];
    }

    for (int i = 0; i < 6; i++)
    {
        if (-1 != conv[i] && 1 != conv[i])
        {
            res = kMixed;

            break; 
        }

        if (conv[i] != conv[i + 1])
        {
            res = kMixed;

            break;
        }
    }

    if (kMixed != res)
    {
        if (-1 == conv[0])
        {
            res = kDesc;
        }
        else
        {
            res = kAsc;
        }
    }

    switch (res)
    {
        case kAsc:
        {
            cout << "ascending";

            break;
        }

        case kDesc:
        {
            cout << "descending";

            break;
        }

        case kMixed:
        {
            cout << "mixed";

            break;
        }
    }

    return 0;
}
