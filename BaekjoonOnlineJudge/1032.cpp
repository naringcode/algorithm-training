#include <bits/stdc++.h>

using namespace std;

string str;
string temp;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    cin >> str;

    for (int i = 1; i < n; i++)
    {
        cin >> temp;

        for (int j = 0; j < temp.length(); j++)
        {
            if (str[j] != temp[j])
            {
                str[j] = '?';
            }
        }
    }

    cout << str;
    
    return 0;
}
