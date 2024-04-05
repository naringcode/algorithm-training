#include <bits/stdc++.h>

using namespace std;

int t;
int n;
char ch;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> t;

    while (t--)
    {
        cin >> n >> ch;

        while (n--)
        {
            cout << ch;
        }

        cout << '\n';
    }

    return 0;
}
