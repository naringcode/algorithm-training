#include <bits/stdc++.h>

using namespace std;

int maxPieces[6] = { 1, 1, 2, 2, 2, 8 };
int numPieces[6];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 6; i++)
    {
        cin >> numPieces[i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout << maxPieces[i] - numPieces[i] << ' ';
    }
    
    return 0;
}
