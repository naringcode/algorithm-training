#include <bits/stdc++.h>

using namespace std;

int t;
int n;

long long val;
string name;

long long resVal;
string resName;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        resVal = -1;

        while (n--)
        {
            cin >> val >> name;

            if (val > resVal)
            {
                resVal = val;
                resName = name;
            }
        }

        cout << resName << '\n';
    }

    return 0;
}
