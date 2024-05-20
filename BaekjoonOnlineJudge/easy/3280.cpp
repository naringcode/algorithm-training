#include <bits/stdc++.h>

using namespace std;

int n;
int d;

string str;

bool table[1004];
vector<bool*> ptrTable;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> d;

    for (int i = 0; i < n; i++)
    {
        table[i] = true;
        ptrTable.push_back(&table[i]);
    }

    for (int cnt = 0; cnt < d; cnt++)
    {
        cin >> str;

        if ("first" == str)
        {
            for (int i = 0; i < n; i += 3)
            {
                *ptrTable[i + 1] = false;
                *ptrTable[i + 2] = false;
            }
        }
        else if ("second" == str)
        {
            for (int i = 0; i < n; i += 3)
            {
                *ptrTable[i + 0] = false;
                *ptrTable[i + 2] = false;
            }
        }
        else if ("third" == str)
        {
            for (int i = 0; i < n; i += 3)
            {
                *ptrTable[i + 0] = false;
                *ptrTable[i + 1] = false;
            }
        }
        
        vector<bool*> temp;

        for (int i = 0; i < n; i += 3)
        {
            temp.push_back(ptrTable[i]);
        }
        
        for (int i = 1; i < n; i += 3)
        {
            temp.push_back(ptrTable[i]);
        }
        
        for (int i = 2; i < n; i += 3)
        {
            temp.push_back(ptrTable[i]);
        }

        ptrTable = temp;
    }

    for (int i = 0; i < n; i++)
    {
        if (true == table[i])
        {
            cout << i + 1 << ' ';
        }
    }

    return 0;
}
