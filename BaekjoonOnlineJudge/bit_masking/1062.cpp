#include <bits/stdc++.h>

using namespace std;

// n개의 단어, k개의 글자
// k개의 글자가 뭔 소리인지 살짝 헤맸다.
//
// n : words
// k : alphabets

int n;
int k;

int bitMasks[54];
int defaultMask;

string str;

vector<int> maskVec;

// long long cntcnt;

int res;

constexpr int get_alphabet_index(char ch)
{
    return 1 << (ch - 'a');
}

void combi(int depth, int cnt, int mask)
{
    if (cnt == k)
    {
        if (defaultMask == (mask & defaultMask))
        {
            maskVec.push_back(mask);
        }

        // cntcnt++;

        return;
    }

    for (int i = depth; i < 26; i++)
    {
        mask |= get_alphabet_index(i + 'a');
        
        combi(i + 1, cnt + 1, mask);

        mask &= ~get_alphabet_index(i + 'a');
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    defaultMask |= get_alphabet_index('a');
    defaultMask |= get_alphabet_index('n');
    defaultMask |= get_alphabet_index('t');
    defaultMask |= get_alphabet_index('i');
    defaultMask |= get_alphabet_index('c');

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        for (char ch : str)
        {
            bitMasks[i] |= get_alphabet_index(ch);
        }
    }

    combi(0, 0, 0);

    for (int mask : maskVec)
    {
        int temp = 0;

        for (int idx = 0; idx < n; idx++)
        {
            if (bitMasks[idx] == (mask & bitMasks[idx]))
            {
                temp++;
            }
        }

        res = max(res, temp);
    }

    // cout << cntcnt << '\n';

    cout << res;

    return 0;
}