#include <bits/stdc++.h>

using namespace std;

const array<char, 3> patternA{ 'A', 'B', 'C' };
const array<char, 4> patternB{ 'B', 'A', 'B', 'C' };
const array<char, 6> patternC{ 'C', 'C', 'A', 'A', 'B', 'B' };

string str;

pair<int, int> pairs[3];

std::string names[3] = { "Goran", "Bruno", "Adrian" };

int main()
{
    int n;

    cin >> n;
    cin >> str;

    pairs[0].second = 2;
    pairs[1].second = 1;
    pairs[2].second = 0;

    for (size_t idx = 0; idx < str.size(); idx++)
    {
        size_t idxA = idx % patternA.size();
        size_t idxB = idx % patternB.size();
        size_t idxC = idx % patternC.size();

        if (str[idx] == patternA[idxA])
        {
            pairs[0].first++;
        }
        
        if (str[idx] == patternB[idxB])
        {
            pairs[1].first++;
        }
        
        if (str[idx] == patternC[idxC])
        {
            pairs[2].first++;
        }
    }

    sort(pairs, pairs + 3, greater());

    cout << pairs[0].first << '\n';

    cout << names[pairs[0].second] << '\n';

    if (pairs[0].first == pairs[1].first)
    {
        cout << names[pairs[1].second] << '\n';
    }

    if (pairs[0].first == pairs[2].first)
    {
        cout << names[pairs[2].second] << '\n';
    }
    
    return 0;
}
