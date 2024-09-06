#include <bits/stdc++.h>

using namespace std;

int a1;
int a2;

int b1;
int b2;

int c1;
int c2;

int resA;
int resB;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a1 >> a2;
    cin >> b1 >> b2;
    cin >> c1 >> c2;

    int minDiag = min(abs(a1 - c1), abs(a2 - c2));
    resA = minDiag + (max(abs(a1 - c1), abs(a2 - c2)) - minDiag);

    resB = abs(b1 - c1) + abs(b2 - c2);

    if (resA == resB)
    {
        cout << "tie";
    }
    else if (resA < resB)
    {
        cout << "bessie";
    }
    else
    {
        cout << "daisy";
    }

    return 0;
}
