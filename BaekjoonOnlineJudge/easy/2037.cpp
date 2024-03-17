#include <bits/stdc++.h>

using namespace std;

struct
{
    int num;
    int order;
} pads[26];

int p;
int w;

string str;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // ABC
    pads[0].num = 2;
    pads[0].order = 1;

    pads[1].num = 2;
    pads[1].order = 2;

    pads[2].num = 2;
    pads[2].order = 3;

    // DEF
    pads[3].num = 3;
    pads[3].order = 1;
    
    pads[4].num = 3;
    pads[4].order = 2;
    
    pads[5].num = 3;
    pads[5].order = 3;
    
    // GHI
    pads[6].num = 4;
    pads[6].order = 1;
    
    pads[7].num = 4;
    pads[7].order = 2;
    
    pads[8].num = 4;
    pads[8].order = 3;

    // JKL
    pads[9].num = 5;
    pads[9].order = 1;
    
    pads[10].num = 5;
    pads[10].order = 2;
    
    pads[11].num = 5;
    pads[11].order = 3;
    
    // GHI
    pads[12].num = 6;
    pads[12].order = 1;
    
    pads[13].num = 6;
    pads[13].order = 2;
    
    pads[14].num = 6;
    pads[14].order = 3;
    
    // PQRS
    pads[15].num = 7;
    pads[15].order = 1;
    
    pads[16].num = 7;
    pads[16].order = 2;
    
    pads[17].num = 7;
    pads[17].order = 3;
    
    pads[18].num = 7;
    pads[18].order = 4;
    
    // TUV
    pads[19].num = 8;
    pads[19].order = 1;
    
    pads[20].num = 8;
    pads[20].order = 2;
    
    pads[21].num = 8;
    pads[21].order = 3;
    
    // WXYZ
    pads[22].num = 9;
    pads[22].order = 1;
    
    pads[23].num = 9;
    pads[23].order = 2;
    
    pads[24].num = 9;
    pads[24].order = 3;
    
    pads[25].num = 9;
    pads[25].order = 4;

    cin >> p >> w;

    cin.ignore();
    getline(cin, str);

    int prev = -1;

    for (char ch : str)
    {
        if (' ' == ch)
        {
            res += p;

            prev = -1;

            continue;
        }

        ch -= 'A';

        if (prev == pads[ch].num)
        {
            res += w + pads[ch].order * p;
        }
        else
        {
            res += pads[ch].order * p;
        }

        prev = pads[ch].num;
        
        // cout << res << '\n';
    }

    cout << res;

    return 0;
}