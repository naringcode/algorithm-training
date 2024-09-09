#include <bits/stdc++.h>

using namespace std;

int t;

int n;
int m;

// int sejunNum;
// int sebiNum;

// int sejunMax;
// int sebiMax;

vector<int> sejunVec;
vector<int> sebiVec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;

        sejunVec.resize(n);
        sebiVec.resize(m);

        for (auto& elem : sejunVec)
        {
            cin >> elem;
        }
        
        for (auto& elem : sebiVec)
        {
            cin >> elem;
        }

        sort(sejunVec.begin(), sejunVec.end());
        sort(sebiVec.begin(), sebiVec.end());

        vector<int>::iterator sejunIter;
        vector<int>::iterator sebiIter;

        sejunIter = sejunVec.begin();
        sebiIter  = sebiVec.begin();

        while (true)
        {
            if (*sejunIter >= *sebiIter)
            {
                sebiIter++;
            }
            else
            {
                sejunIter++;
            }

            if (sejunIter == sejunVec.end())
            {
                cout << "B\n";

                break;
            }
            else if (sebiIter == sebiVec.end())
            {
                cout << "S\n";

                break;
            }
        }

        // sejunMax = 0;
        // sebiMax  = 0;

        // for (int j = 0; j < n; j++)
        // {
        //     cin >> sejunNum;

        //     sejunMax = max(sejunMax, sejunNum);
        // }

        // for (int j = 0; j < m; j++)
        // {
        //     cin >> sebiNum;

        //     sebiMax = max(sebiMax, sebiNum);
        // }

        // if (sejunMax >= sebiMax)
        // {
        //     cout << "S\n";
        // }
        // else
        // {
        //     cout << "B\n";
        // }
    }

    return 0;
}