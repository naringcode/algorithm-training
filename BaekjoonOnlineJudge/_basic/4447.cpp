#include <bits/stdc++.h>

using namespace std;

int n;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    cin.ignore();

    while (n--)
    {
        getline(cin, str);

        cout << str << " is ";

        int gCnt = count(str.begin(), str.end(), 'g') + count(str.begin(), str.end(), 'G');
        int bCnt = count(str.begin(), str.end(), 'b') + count(str.begin(), str.end(), 'B');

        if (gCnt == bCnt)
        {
            cout << "NEUTRAL\n";
        }
        else
        {
            cout << (gCnt > bCnt ? "GOOD\n" : "A BADDY\n"); 
        }
    }

    return 0;
}
