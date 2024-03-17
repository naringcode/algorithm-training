#include <bits/stdc++.h>

using namespace std;

// A : 0
// G : 1
// C : 2
// T : 3
enum
{
    kA = 0,
    kG = 1,
    kC = 2,
    kT = 3,
};

int table[4][4] =
{
    { kA, kC, kA, kG },
    { kC, kG, kT, kA },
    { kA, kT, kC, kG },
    { kG, kA, kG, kT }
};

string str;
vector<int> numVec;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> str;

    for (char ch : str)
    {
        if ('A' == ch)
        {
            numVec.push_back(kA);
        }
        else if ('G' == ch)
        {
            numVec.push_back(kG);
        }
        else if ('C' == ch)
        {
            numVec.push_back(kC);
        }
        else if ('T' == ch)
        {
            numVec.push_back(kT);
        }
    }

    while (numVec.size() > 1)
    {
        int lastIdx = numVec.size() - 1;

        numVec[lastIdx - 1] = table[numVec[lastIdx - 1]][numVec[lastIdx]];
        numVec.pop_back();
    }

    if (kA == numVec.back())
    {
        cout << "A";
    }
    else if (kG == numVec.back())
    {
        cout << "G";
    }
    else if (kC == numVec.back())
    {
        cout << "C";
    }
    else if (kT == numVec.back())
    {
        cout << "T";
    }

    return 0;
}
