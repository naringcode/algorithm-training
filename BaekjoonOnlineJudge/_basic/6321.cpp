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

    for (int i = 1; i <= n; i++)
    {
        cin >> str;

        for (char& ch : str)
        {
            ch += 1;
            
            if (ch > 'Z')
            {
                ch -= 26;
            }
        }

        cout << "String #" << i << '\n';
        cout << str << "\n\n";
    }

    return 0;
}
